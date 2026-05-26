#--------------------------------------------------------------------------------
#Description: Environment variables.
#---------------------------------------------------------------------------------
#

CMF_GIT_ROOT ?= "git://code.rdkcentral.com/r"
CMF_GIT_PROTOCOL ?= "https"
CMF_RDK_COMPONENTS_ROOT_GIT ?= "${CMF_GIT_ROOT}/rdk/components"
CMF_GIT_BRANCH ?= "rdk-next"
CMF_GIT_MASTER_BRANCH ?= "master"
CMF_GIT_SRC_URI_SUFFIX = "protocol=${CMF_GIT_PROTOCOL};nobranch=1"

CMF_GITHUB_ROOT ?= "git://github.com/rdkcentral"
CMF_GITHUB_MAIN_BRANCH ?= "main"
CMF_GITHUB_MASTER_BRANCH ?= "master"
CMF_GITHUB_STABLE2_BRANCH ?= "topic/rdke_mvp"

RDKE_GITHUB_BRANCH ?= "develop"
RDK_GENERIC_ROOT_GIT ?= "git://${RDK_GIT}/rdk/components/generic"

PROJECT_BRANCH ?= "${RDKE_GITHUB_BRANCH}"
