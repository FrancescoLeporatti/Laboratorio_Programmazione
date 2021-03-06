#include "MainWindow.h"

MainWindow::MainWindow(FileLoader* fl, QWidget* parent) : loader(fl), QMainWindow(parent){
    loader->addObserver(this);
    this->setWindowTitle("Laboratorio di Programmazione");
    this->setFixedSize(QSize(600, 400));

    title = new QLabel("Caricatore di File", this);
    title->setGeometry(QRect(QPoint(100, 20), QSize(400, 100)));
    title->setAlignment(Qt::AlignCenter);
    QFont font = title->font();
    font.setPointSize(25);
    title->setFont(font);

    label = new QLabel("Progress", this);
    label->setGeometry(QRect(QPoint(250, 140), QSize(90, 20)));
    label->setAlignment(Qt::AlignCenter);
    font.setPointSize(11);
    label->setFont(font);

    button = new QPushButton("Load Files", this);
    button->setGeometry(QRect(QPoint(215, 210), QSize(165, 30)));

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(QRect(QPoint(150, 160), QSize(300, 40)));
    progressBar->setMinimum(0);
    progressBar->setMaximum(1000);
    progressBar->setValue(0);

    text = new QTextEdit(this);
    text->setGeometry(QRect(QPoint(50, 270), QSize(500, 120)));
    text->setText("Ready to load resources!\n");
    text->setReadOnly(true);

    QTextCursor c =  text->textCursor();
    c.movePosition(QTextCursor::End);
    text->setTextCursor(c);
    connect(button, SIGNAL (released()), this, SLOT (loadResources()));
}


void MainWindow::update(){
    if (loader->isLoaded()) {

        // Update the progress bar by the same amount for each file loaded
        progressBar->setValue(progressBar->value() + (1000 / loader->getNumberOfFiles()));

        // Update the text log when the loading is complete
        QString log = "Loaded '" + QString(loader->getFilename()) + QString("' successfully (") +
                      QString::number(loader->getFilesize()) + QString(" bytes).") + "\n";
        text->append(log);

    } else {

        // Update the text log when the file couldn't be loaded
        QString log = "Could not load '" + loader->getFilename() + QString("'");
        text->append(log);
    }
}

void MainWindow::loadResources() {

    button->setText("Loading Files...");

    std::vector<std::string> files;

    // Add files that need to be loaded to the vector
    files.push_back("morgagni.jpeg");
    files.push_back("santamarta.jpeg");
    files.push_back("SampleText.txt");
    files.push_back("sunset.jpeg");
    files.push_back("rotating_earth.gif");
    files.push_back("car.pdf");
    files.push_back("screenshot.png");
    files.push_back("SampleZip.zip");

    loader->load(files);
    button->setText("Loading Completed");
}