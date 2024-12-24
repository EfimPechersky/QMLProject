import QtQuick
import Felgo
import QtQuick.Controls
Page {
    signal buttonLoginClicked();
    signal buttonToRegisterClicked();
    id:root
    width: parent.width
    height: parent.height
    Rectangle {
        anchors.fill: parent
        color: "#FFE9CA"
        Rectangle{
            anchors.left: parent.left
            anchors.right:parent.right
            anchors.top:parent.top
            height:50
            color:"#F2B83C"
            Image {
                source: "qrc:/assets/logo.png" // Укажите путь к изображению лупы
                width: parent.height
                height: parent.height
                anchors.right: parent.right
            }
        }

        Text {
            id:maintext
            text: "Авторизация"
            font.bold: true
            anchors.top: parent.top
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 140
            font.pointSize: 24
        }
        TextField {
            id: usernameField
            width:200
            placeholderText: "Логин"
            font.pixelSize: 16
            anchors.top: maintext.bottom
            anchors.topMargin: 20
            anchors.horizontalCenter: parent.horizontalCenter
            background: Rectangle {
                            color: "white"
                            radius: 20  // Задаем радиус скругления углов
                            border.color: "gray"
                            border.width: 1
                        }
        }
        TextField {
            id: passwordField
            width:200
            placeholderText: "Пароль"
            font.pixelSize: 16
            echoMode: TextInput.Password
            anchors.topMargin: 20
            anchors.top: usernameField.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            background: Rectangle {

                            color: "white"
                            radius: 20  // Задаем радиус скругления углов
                            border.color: "gray"
                            border.width: 1
                        }
        }
        LogRegButton{
            id:logbut
            width:200
            height:40
            anchors.topMargin: 20
            anchors.top: passwordField.bottom
            anchors.left: passwordField.left
            anchors.right: passwordField.right
            buttext:"Вход"
            onButtonClicked: {
                root.buttonLoginClicked()
            }
        }
        LogRegButton {
            buttext: "Зарегестрироваться"
            width:200
            height:40
            anchors.topMargin: 200
            anchors.top: logbut.bottom
            anchors.left: logbut.left
            anchors.right: logbut.right
            onButtonClicked: {
                // Сигнал для навигации
                root.buttonToRegisterClicked()
            }
        }

    }

}

