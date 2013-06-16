name := "Project Euler"

organization := "com.github.project.euler"

version := "0.1.0-SNAPSHOT"

scalaVersion := "2.10.0"

libraryDependencies ++= Seq(
  "org.specs2" %% "specs2" % "1.13" % "test"
)

initialCommands := "import com.github.project.euler.projecteuler._"
