import Felgo
import QtQuick
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.2


App {
    Window{
    visible: true
    width: 360
    height: 600
    title: "Application"
    AddWorkStep3{
        id:addworkstep3
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonSaveClicked: {
            stack_view.replace(savedworks)
        }
    }
    AddWorkStep2{
        id:addworkstep2
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonNextStep: {
            stack_view.replace(addworkstep3)
        }
    }
    AddWork{
        id:addworkstep1
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonNextStep: {
            stack_view.replace(addworkstep2)
        }
    }
    ChangeWork{
        id:changework
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonBack: {
            stack_view.replace(openvush)
        }
    }

    OpenedVush{
        id:openvush
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonChangeWork: {
            stack_view.replace(changework)
        }
    }
    MyWorks{
        id:myworks
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonToVushClicked:{
            stack_view.replace(openvush)
        }
        onButtonAddVush: {
            stack_view.replace(addworkstep1)
        }

    }
    SavedWorks{
        id:savedworks
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonAddVush:{
            stack_view.replace(addworkstep1)
        }
        onButtonToVushClicked:{
            stack_view.replace(openvush)
        }

    }
    UsersWorks{
        id:userworks
        menudraw.onUsersWorks:{
            stack_view.replace(userworks)
        }
        menudraw.onQuit:{
            stack_view.replace(loginpage)
        }
        menudraw.onMyWorks:{
            stack_view.replace(myworks)
        }
        menudraw.onSavedWorks:{
            stack_view.replace(savedworks)
        }
        onButtonToVushClicked:{
            stack_view.replace(openvush)
        }
    }

    RegisterPage{
        id:regpage
        onButtonLoginClicked: {
            stack_view.replace(userworks)
        }
    }
    LoginPage{

        id:loginpage
        onButtonToRegisterClicked: {
            stack_view.replace(regpage)
        }
        onButtonLoginClicked: {
            stack_view.replace(userworks)
        }
    }
    StackView {
        id: stack_view
        anchors.fill: parent
        initialItem: loginpage
    }
    }

}
