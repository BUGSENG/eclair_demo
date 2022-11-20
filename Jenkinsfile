pipeline {
    agent { label 'docker1' }

    stages {
        stage('Clean') {
            steps {
                cleanWs()
            }
        }
        stage('Fetch') {
            steps {
                git branch: 'main', url: 'https://eclairit.com:8444/swquality/eclair_demo.git'
            }
        }
        stage('Prepare') {
            steps {
                sh './prepare.sh Debug'
            }
        }
        stage('Build with analysis') {
            steps {
                sh 'ECLAIR/analyze.sh'
            }
        }
        stage('Archive artifacts') {
            steps {
                archiveArtifacts artifacts: 'ECLAIR_out/**'
            }
        }
        stage('Record reports') {
            steps {
                recordIssues(tools: [eclairTool(dbPath: 'ECLAIR_out/PROJECT.ecd', pattern: 'jenkins.xml')])
            }
        }
    }
}
