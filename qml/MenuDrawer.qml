import QtQuick
import Felgo
import QtQuick.Controls
Drawer {
    id:drawer
            width: 200  // Ширина меню
            height: parent.height
            signal usersWorks()
            signal myWorks()
            signal savedWorks()
            signal quit()
            // Содержимое меню
            Column {
                anchors.fill:parent
                spacing: 10
                //padding: 20
                Rectangle{
                    id:l1
                    anchors.left:parent.left
                    anchors.right: parent.right
                    height:40
                    Text{
                        text:"Степан"
                        anchors.left:parent.left
                        anchors.verticalCenter: parent.verticalCenter
                        font.pointSize: 13
                    }
                    Rectangle{
                        width:parent.height-10
                        height:parent.height-10
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.right: parent.right
                        Rectangle{
                            anchors.verticalCenter: parent.verticalCenter
                            radius:20
                            width:parent.height
                            height:5
                            color:"black"
                            rotation: 45
                        }
                        Rectangle{
                            anchors.verticalCenter: parent.verticalCenter
                            radius:20
                            width:parent.height
                            height:5
                            color:"black"
                            rotation: 135
                        }
                        MouseArea{
                            anchors.fill:parent
                            onClicked: {
                                drawer.close()
                            }
                        }
                    }
                }
                Rectangle{
                    anchors.left:parent.left
                    anchors.right: parent.right
                    id:l2
                    anchors.top:l1.bottom
                    height:30
                    Text{
                        text:"Мои работы"
                        anchors.centerIn:parent
                        font.pointSize: 13
                    }
                    MouseArea{
                        anchors.fill:parent
                        onPressed: {
                            l2.color="#EEEEEE"
                        }
                        onReleased: {
                            l2.color="white"
                        }
                        onClicked: {
                            drawer.close()
                            drawer.myWorks()
                        }
                    }
                }
                Rectangle{
                    anchors.left:parent.left
                    anchors.right: parent.right
                    id:l3
                    anchors.top:l2.bottom
                    height:30
                    Text{
                        text:"Сохраненные"
                        anchors.centerIn:parent
                        font.pointSize: 13
                    }
                    MouseArea{
                        anchors.fill:parent
                        onPressed: {
                            l3.color="#EEEEEE"
                        }
                        onReleased: {
                            l3.color="white"
                        }
                        onClicked: {
                            drawer.close()
                            drawer.savedWorks()
                        }
                    }
                }
                Rectangle{
                    anchors.left:parent.left
                    anchors.right: parent.right
                    id:l4
                    anchors.top:l3.bottom
                    height:30
                    Text{
                        text:"Другие Работы"
                        anchors.centerIn:parent
                        font.pointSize: 13
                    }
                    MouseArea{
                        anchors.fill:parent
                        onPressed: {
                            l4.color="#EEEEEE"
                        }
                        onReleased: {
                            l4.color="white"
                        }
                        onClicked: {
                            drawer.close()
                            drawer.usersWorks()
                        }
                    }
                }
                Rectangle{
                    anchors.left:parent.left
                    anchors.right: parent.right
                    id:l5
                    anchors.top:l4.bottom
                    height:30
                    color:"#EB6363"
                    Text{
                        text:"Выйти"
                        anchors.centerIn:parent
                        font.pointSize: 13
                        color:"white"
                    }
                    MouseArea{
                        anchors.fill:parent
                        onPressed: {
                            l5.color="#EEEEEE"
                        }
                        onReleased: {
                            l5.color="#EB6363"
                        }
                        onClicked: {
                            drawer.close()
                            drawer.quit()
                        }
                    }
                }
            }
    }
