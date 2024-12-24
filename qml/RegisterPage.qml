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
            text: "Регистрация"
            font.bold: true
            anchors.top: parent.top
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 140
            font.pointSize: 24
        }
        TextField {
            id: emailField
            width:200
            placeholderText: "Почта"
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
            id: usernameField
            width:200
            placeholderText: "Логин"
            font.pixelSize: 16
            anchors.top: emailField.bottom
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
        TextField {
            id: repeatpasswordField
            width:200
            placeholderText: "Повторите Пароль"
            font.pixelSize: 16
            echoMode: TextInput.Password
            anchors.topMargin: 20
            anchors.top: passwordField.bottom
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
            anchors.top: repeatpasswordField.bottom
            anchors.left: repeatpasswordField.left
            anchors.right: repeatpasswordField.right
            buttext:"Зарегистрироваться"
            onButtonClicked: {
                root.buttonLoginClicked()
            }
        }

    }

}

