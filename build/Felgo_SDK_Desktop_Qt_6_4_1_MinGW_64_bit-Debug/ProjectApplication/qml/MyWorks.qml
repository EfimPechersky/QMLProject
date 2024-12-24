
import QtQuick
import Felgo
import QtQuick.Controls
import QtQuick.Layouts
Page {
    signal buttonToVushClicked();
    signal buttonAddVush()
    property alias menudraw:drawer
    id:root
    width: parent.width
    height: parent.height
    MenuDrawer{
        id:drawer
    }
        Rectangle {
            anchors.fill: parent
            color: "#FFE9CA"
            Rectangle{
                id:header
                anchors.left: parent.left
                anchors.right:parent.right
                anchors.top:parent.top
                height:50
                color:"#F2B83C"
                MouseArea{
                    height:parent.height
                    width:parent.width
                    anchors.left:parent.left
                    Rectangle{
                        anchors.topMargin: 2
                        radius:20
                        color:"white"
                        width:parent.height
                        height:10
                        anchors.top:parent.top
                    }
                    Rectangle{
                        radius:20
                        color:"white"
                        width:parent.height
                        height:10
                        anchors.verticalCenter:parent.verticalCenter
                    }
                    Rectangle{
                        radius:20
                        color:"white"
                        width:parent.height
                        height:10
                        anchors.bottom:parent.bottom
                        anchors.bottomMargin: 2
                    }
                    onClicked: drawer.open()  // Открывает меню при нажатии
                }
                Image {
                    source: "qrc:/assets/logo.png" // Укажите путь к изображению лупы
                    width: parent.height
                    height: parent.height
                    anchors.right: parent.right
                }
            }
            ScrollView{
                anchors.top: header.bottom
                anchors.left:parent.left
                anchors.right:parent.right
                anchors.bottom:parent.bottom
                contentHeight:800
                Column{
                    anchors.fill: parent
            Text {
                id:maintext
                text: "Ваши Работы"
                font.bold: true
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.topMargin: 20
                font.pointSize: 20
            }
            GridLayout {
                anchors.top:maintext.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.topMargin: 20
                id: gridlay
                rows: 3
                columns: 2
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
                VushObj{
                    id:ld
                    onButtonClicked: {
                        root.buttonToVushClicked()
                    }
                }
            }
            Text{
                text: "< 1 2 3 4 5 6 ... >"
                font.bold: true
                anchors.top: gridlay.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: 20
            }
        }

        }
            Rectangle{
                id:stickyButton
                width:50
                height:50
                anchors.right:parent.right
                anchors.rightMargin: 20
                anchors.top:parent.top
                anchors.topMargin: 450
                color: "transparent"
                Image {
                    source: "qrc:/assets/stub.png" // Укажите путь к изображению лупы
                    anchors.fill:parent
                }
                MouseArea{
                    anchors.fill:parent
                    onClicked: {
                        root.buttonAddVush()
                    }
                }
            }
    }

}



