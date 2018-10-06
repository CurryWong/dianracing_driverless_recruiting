
(cl:in-package :asdf)

(defsystem "do_math-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Suan" :depends-on ("_package_Suan"))
    (:file "_package_Suan" :depends-on ("_package"))
  ))