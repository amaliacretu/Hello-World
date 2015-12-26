
(cl:in-package :asdf)

(defsystem "chapter2_tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AddTwoInt" :depends-on ("_package_AddTwoInt"))
    (:file "_package_AddTwoInt" :depends-on ("_package"))
  ))