/////////////////////////////////////////////////////////////////////////////
///
///	@file PrlVmManipulationsTest.h
///
///	This file is the part of parallels public SDK library tests suite.
///	Tests fixture class for testing VM manipulating SDK API.
///
///	@author sandro
///
/// Copyright (c) 2005-2015 Parallels IP Holdings GmbH
///
/// This file is part of Virtuozzo Core. Virtuozzo Core is free
/// software; you can redistribute it and/or modify it under the terms
/// of the GNU General Public License as published by the Free Software
/// Foundation; either version 2 of the License, or (at your option) any
/// later version.
/// 
/// This program is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU General Public License for more details.
/// 
/// You should have received a copy of the GNU General Public License
/// along with this program; if not, write to the Free Software
/// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
/// 02110-1301, USA.
///
/// Our contact details: Parallels IP Holdings GmbH, Vordergasse 59, 8200
/// Schaffhausen, Switzerland.
///
/////////////////////////////////////////////////////////////////////////////
#ifndef PrlVmManipulationsTest_H
#define PrlVmManipulationsTest_H

#include <QtTest/QtTest>

#include "SDK/Wrappers/SdkWrap/SdkHandleWrap.h"

class PrlVmManipulationsTest : public QObject
{

Q_OBJECT

private slots:
	void initTestCase();
	void init();
	void cleanup();
	void testCreateVmFromConfig();
	void testStartOnNonValidVmHandle();
	void testStopOnNonValidVmHandle();
	void testInitiateDevStateNotificationsOnNonValidVmHandle();
	void testResetOnNonValidVmHandle();
	void testPauseOnNonValidVmHandle();
	void testSuspendOnNonValidVmHandle();
	void testResumeOnNonValidVmHandle();
	void testDeleteOnNonValidVmHandle();
	void testUnregOnNonValidVmHandle();
	void testGetConfigOnNonValidVmHandle();
	void testGetStateOnNonValidVmHandle();
	void testCloneOnNonValidVmHandle();
	void testCloneOnNullVmName();
	void testCloneOnNullVmPath();
	void testGettingResultOfGetVmList();
	void testEditVmConfig();
	void testEditVmConfigWithCritcalErrorConfigValidate();
	void testGetVmName();
	void testGetVmNameNotEnoughBufSize();
	void testGetVmNameNullBufSize();
	void testSetVmName();
	void testSetVmNameTryToSetEmptyStringValue();
	void testGetVmHostname();
	void testGetVmHostnameNullBufSize();
	void testSetVmHostname();
	void testGetVmDefaultGateway();
	void testGetVmDefaultGatewayNullBufSize();
	void testGetVmDefaultGatewayInvalidHandle();
	void testGetVmDefaultGatewayNonVmCfgHandle();
	void testSetVmDefaultGateway();
	void testSetVmDefaultGatewayInvalidHandle();
	void testSetVmDefaultGatewayNonVmCfgHandle();
	void testGetVmDefaultGatewayIPv6();
	void testGetVmDefaultGatewayIPv6OnWrongParams();
	void testSetVmDefaultGatewayIPv6();
	void testSetVmDefaultGatewayIPv6OnWrongParams();
	void testGetVmUuid();
	void testGetVmUuidNotEnoughBufSize();
	void testGetVmUuidNullBufSize();
	void testSetVmUuid();
	void testSetVmUuidTryToSetEmptyStringValue();
	void testGetVmOsType();
	void testGetVmOsVersion();
	void testSetVmGuestOsVersion();
	void testSetVmGuestOsVersionOnMacosTiger();
	void testSetVmGuestOsVersionOnMacosLeopard();
	void testSetVmGuestOsVersionWrongOsVersion();
	void testGetVmRamSize();
	void testSetVmRamSize();
	void testSetVmRamSizeNullRamSize();
	void testGetState();
	void testVmInfoIsInvalid_FailOnInvalidHandle();
	void testVmInfoIsInvalid();
	void testVmInfoIsVmWaitingForAnswer();
	void testCreateVmUuidAutoGenerated();
	void testGetVmVideoRamSize();
	void testSetVmVideoRamSize();
	void testSetVmVideoRamSizeNullVideoRamSize();
	void testGetHostMemQuotaMin();
	void testSetHostMemQuotaMin();
	void testHostMemQuotaMinOnWrongParams();
	void testGetHostMemQuotaMax();
	void testSetHostMemQuotaMax();
	void testHostMemQuotaMaxOnWrongParams();
	void testGetHostMemQuotaPriority();
	void testSetHostMemQuotaPriority();
	void testHostMemQuotaPriorityOnWrongParams();
	void testIsHostMemAutoQuota();
	void testSetHostMemAutoQuota();
	void testHostMemAutoQuotaOnWrongParams();
	void testGetMaxBalloonSize();
	void testSetMaxBalloonSize();
	void testMaxBalloonSizeOnWrongParams();
	void testGetVmCpuCount();
	void testSetVmCpuCount();
	void testGetVmCpuMode();
	void testSetVmCpuMode();
	void testGetVmCpuAccelLevel();
	void testSetVmCpuAccelLevel();
	void testIsVmCpuVtxEnabled();
	void testSetVmCpuVtxEnabled();
	void testVmCpuVtxEnabledOnWrongParams();
	void testIsVmCpuHotplugEnabled();
	void testSetVmCpuHotplugEnabled();
	void testVmCpuHotplugEnabledOnWrongParams();
	void testIs3DAccelerationEnabled();
	void testSet3DAccelerationEnabled();
	void test3DAccelerationEnabledOnWrongParams();
	void testGet3DAccelerationMode();
	void testSet3DAccelerationMode();
	void test3DAccelerationModeOnWrongParams();
	void testGetServerUuid();
	void testGetServerUuidNotEnoughBufSize();
	void testGetServerUuidNullBufSize();
	void testGetServerHost();
	void testGetServerHostNotEnoughBufSize();
	void testGetServerHostNullBufSize();
	void testGetHomePath();
	void testGetHomePathNotEnoughBufSize();
	void testGetHomePathNullBufSize();
	void testGetVmIcon();
	void testGetVmIconNotEnoughBufSize();
	void testGetVmIconNullBufSize();
	void testSetVmIcon();
	void testSetVmIconTryToSetEmptyStringValue();
	void testGetVmDescription();
	void testGetVmDescriptionNotEnoughBufSize();
	void testGetVmDescriptionNullBufSize();
	void testSetVmDescription();
	void testSetVmDescriptionTryToSetEmptyStringValue();
	void testGetVmCustomProperty();
	void testGetVmCustomPropertyNotEnoughBufSize();
	void testGetVmCustomPropertyNullBufSize();
	void testSetVmCustomProperty();
	void testSetVmCustomPropertyTryToSetEmptyStringValue();
	void testGetVmAutoStart();
	void testSetVmAutoStart();
	void testVmAutoStartWrongParams();
	void testGetVmAutoStartDelay();
	void testSetVmAutoStartDelay();
	void testVmAutoStartDelayWrongParams();
	void testGetVmStartLoginMode();
	void testSetVmStartLoginMode();
	void testVmStartLoginModeWrongParams();
	void testGetVmStartUserLogin();
	void testSetVmStartUserCreds();
	void testVmStartUserCredsWrongParams();
	void testGetVmAutoStop();
	void testSetVmAutoStop();
	void testVmAutoStopWrongParams();
	void testGetVmWindowMode();
	void testSetStartInDetachedWindowEnabled();
	void testStartInDetachedWindowEnabledOnWrongParams();
	void testGetVmLastModifiedDate();
	void testGetVmLastModifiedDateNotEnoughBufSize();
	void testGetVmLastModifiedDateNullBufSize();
	void testGetVmLastModifierName();
	void testGetVmLastModifierNameNotEnoughBufSize();
	void testGetVmLastModifierNameNullBufSize();
	void testIsVmGuestSharingEnabled();
	void testSetVmGuestSharingEnabled();
	void testIsVmGuestSharingAutoMount();
	void testSetVmGuestSharingAutoMount();
	void testIsVmGuestSharingEnableSpotlight();
	void testIsVmGuestSharingEnableSpotlightOnNonVmHandle();
	void testIsVmGuestSharingEnableSpotlightOnInvalidVmHandle();
	void testIsVmGuestSharingEnableSpotlightOnWrongBuffer();
	void testSetVmGuestSharingEnableSpotlight();
	void testSetVmGuestSharingEnableSpotlightOnWrongVmHandle();
	void testSetVmGuestSharingEnableSpotlightOnInvalidVmHandle();
	void testIsVmHostSharingEnabled();
	void testSetVmHostSharingEnabled();
	void testIsUserDefinedSharedFoldersEnabled();
	void testSetUserDefinedSharedFoldersEnabled();
	void testIsShareAllHostDisks();
	void testIsShareAllHostDisksOnNonVmHandle();
	void testIsShareAllHostDisksInvalidVmHandle();
	void testIsShareAllHostDisksOnWrongBuffer();
	void testSetShareAllHostDisks();
	void testSetShareAllHostDisksOnWrongVmHandle();
	void testSetShareAllHostDisksOnInvalidVmHandle();
	void testIsShareUserHomeDir();
	void testIsShareUserHomeDirOnNonVmHandle();
	void testIsShareUserHomeDirOnInvalidHandle();
	void testIsShareUserHomeDirOnWrongBuffer();
	void testSetShareUserHomeDir();
	void testSetShareUserHomeDirOnNonVmHandle();
	void testSetShareUserHomeDirOnInvalidHandle();
	void testIsMapSharedFoldersOnLetters();
	void testIsMapSharedFoldersOnLettersOnNonVmHandle();
	void testIsMapSharedFoldersOnLettersOnInvalidVmHandle();
	void testIsMapSharedFoldersOnLettersOnWrongBuffer();
	void testSetMapSharedFoldersOnLetters();
	void testSetMapSharedFoldersOnLettersOnNonVmHandle();
	void testSetMapSharedFoldersOnLettersOnInvalidVmHandle();
	void testGetVmIoLimit();
	void testSetVmIoLimit();
	void testVmIoLimitOnWrongParams();
	void testIsVmDiskCacheWriteBack();
	void testSetVmDiskCacheWriteBack();
	void testIsVmOsResInFullScrMode();
	void testSetVmOsResInFullScrMode();
	void testIsVmCloseAppOnShutdown();
	void testSetVmCloseAppOnShutdown();
	void testGetVmSystemFlags();
	void testGetVmSystemFlagsNotEnoughBufSize();
	void testGetVmSystemFlagsNullBufSize();
	void testSetVmSystemFlags();
	void testSetVmSystemFlagsTryToSetEmptyStringValue();
	void testIsVmDisableAPIC();
	void testSetVmDisableAPICSign();
	void testIsVmDisableAPICOnWrongParams();
	void testIsVmDisableSpeaker();
	void testSetVmDisableSpeakerSign();
	void testIsVmDisableSpeakerOnWrongParams();
	void testGetVmForegroundPriority();
	void testSetVmForegroundPriority();
	void testGetVmBackgroundPriority();
	void testSetVmBackgroundPriority();
	void testCreateShare();
	void testGetSharesCount();
	void testGetShare();
	void testGetShareNonValidIndex();
	void testShareRemove();
	void testGetShareName();
	void testGetShareNameNotEnoughBufSize();
	void testGetShareNameNullBufSize();
	void testSetShareName();
	void testGetSharePath();
	void testGetSharePathNotEnoughBufSize();
	void testGetSharePathNullBufSize();
	void testSetSharePath();
	void testGetShareDescription();
	void testGetShareDescriptionNotEnoughBufSize();
	void testGetShareDescriptionNullBufSize();
	void testSetShareDescription();
	void testShareIsEnabled();
	void testShareSetEnabled();
	void testShareIsReadOnly();
	void testShareSetReadOnly();
	void testGetVmHandlesFromDifferentServerHandles();
	void testVmDevsHandlesNonMadeInvalidOnGetVmConfigCall();
	void testVmShareHandleNonMadeInvalidOnFromStringCall();
	void testVmShareHandleMadeInvalidOnRemove();
	void testVmShareHandleNonMadeInvalidOnGetVmConfigCall();
	void testVmShareHandleMadeInvalidOnRemoveFromAnotherSession();
	void testCreateUnattendedWinFloppy();
	void testCreateBootDev();
	void testGetBootDevCount();
	void testGetBootDev();
	void testGetBootDevNonValidIndex();
	void testBootDevRemove();
	void testVmBootDevHandleNonMadeInvalidOnFromStringCall();
	void testVmBootDevHandleMadeInvalidOnRemove();
	void testVmBootDevHandleNonMadeInvalidOnGetVmConfigCall();
	void testVmBootDevHandleMadeInvalidOnRemoveFromAnotherSession();
	void testBootDevGetType();
	void testBootDevSetType();
	void testBootDevGetIndex();
	void testBootDevSetIndex();
	void testBootDevGetSequenceIndex();
	void testBootDevSetSequenceIndex();
	void testBootDevIsInUse();
	void testBootDevSetInUse();
	void testGetParamByIndexAsStringOnGetVmListRequest();
	void testGetParamByIndexAsStringOnGetVmListRequestWrongParamIndex();
	void testGetParamAsStringOnGetVmListRequest();
	void testCreateAnswerEvent();
	void testCreateAnswerEventFromVmEvent();
	void testSubscribeToGuestStatistics();
	void testGetStatistics();
	void testCreateVmWithOsDiv2Name();
	void testCreateVmWithOsDiv2Name2();
	void testChangeVmNameOnValueWithIncorrectPathSymbols();
	void testChangeVmNameOnValueWithIncorrectPathSymbols2();
	void testChangeVmNameOnValueWithIncorrectPathSymbols3();
	void testCloneVmOnValueWithIncorrectPathSymbols();
	void testCloneVmOnValueWithIncorrectPathSymbols2();
	void testCreateVmWithPercentageSymbolInName();
	void testCreateImageOnFloppyDevice();
	void testIsTemplate();
	void testSetTemplateSign();
	void testVmEventProcessing1();
	void testCreateVmWithDevices();
	void testEditVmWithCdromWhichImageNotExists();
	void testEditVmWithFloppyWhichImageNotExists();
	void testEditVmWithHardWhichImageNotExists();
	void testVmAccessRightsOnAllPermissionsGranted();
	void testVmAccessRightsOnReadOnly();
	void testVmAccessRightsOnReadWrite();
	void testVmAccessRightsOnReadExecute();
	void testVmAccessRightsOnNoPermissions();
	void testVmGetAccessRightsFailedOnNullVmHandle();
	void testVmGetAccessRightsFailedOnNonVmHandle();
	void testVmGetAccessRightsFailedOnNullResultBuffer();
	void testAclIsAllowedFailedOnNullAclHandle();
	void testAclIsAllowedFailedOnNonAclHandle();
	void testAclIsAllowedFailedOnNullResultBuffer();
	void testGetVmAccessRightsFromVmInfo();
	void testGetVmAccessRightsFromVmInfoFailedOnNullVmInfoHandle();
	void testGetVmAccessRightsFromVmInfoFailedOnNonVmInfoHandle();
	void testGetVmAccessRightsFromVmInfoFailedOnNullResultBuffer();
	void testVmGetAccessRightsGetAccessForOthers();
	void testAclGetAccessForOthersFailedOnNonAclHandle();
	void testAclGetAccessForOthersFailedOnNullAclHandle();
	void testAclGetAccessForOthersFailedOnNullResultBuffer();
	void testVmGetAccessRightsSetAccessForOthers();
	void testAclSetAccessForOthersFailedOnNonAclHandle();
	void testAclSetAccessForOthersFailedOnNullAclHandle();
	void testVmGetAccessRightsGetOwnerName();
	void testAclGetOwnerNameFailedOnNonAclHandle();
	void testAclGetOwnerNameFailedOnNullAclHandle();
	void testAclGetOwnerNameFailedOnNullResultBuffer();
	void testVmGetAccessRightsIsCurrentSessionOwner();
	void testAclIsCurrentSessionOwnerFailedOnNonAclHandle();
	void testAclIsCurrentSessionOwnerFailedOnNullAclHandle();
	void testAclIsCurrentSessionOwnerFailedOnNullResultBuffer();
	void testGenerateVmDevFilename();
	void testGenerateVmDevFilenameWithDelimiter();
	void testGenerateVmDevFilenameOnEmptyFilenamePrefix();
	void testGenerateVmDevFilenameOnNullFilenamePrefix();
	void testGenerateVmDevFilenameOnEmptyFilenameSuffix();
	void testGenerateVmDevFilenameOnNullFilenameSuffix();
	void testGenerateVmDevFilenameOnBothEmptyFilenamePrefixAndSuffix();
	void testGenerateVmDevFilenameOnBothNullFilenamePrefixAndSuffix();
	void testGenerateVmDevFilenameOnNullVmHandle();
	void testGenerateVmDevFilenameOnNonVmHandle();
	void testGenerateVmDevFilenameOnNewlyCreatedVmHandle();
	void testTryToStartVMTemplate();
	void testTryToStartVMTemplateViaStartEx();
	void testTryToStartVMWithCritcalErrorConfigValidate();
	void testTryToCreateVMWithCritcalErrorConfigValidate();
	void testVmUpdateSecurity();
	void testVmUpdateSecurityFailedOnNonVmHandle();
	void testVmUpdateSecurityFailedOnNullVmHandle();
	void testVmUpdateSecurityFailedOnNonAccessRightsHandle();
	void testVmUpdateSecurityFailedOnNullAccessRightsHandle();
	void testVmUpdateSecurityFailedOnAttemptToCallByNonOwnerSession();
	void testVmUpdateSecurityOnLocalAdministratorAccount();
	void testConcurentExecutionOfBeginEdit();
	void testGetQuestionsList();
	void testGetQuestionsListOnInvalidHandle();
	void testGetQuestionsListOnWrongTypeHandle();
	void testGetQuestionsListOnNullResultBuffer();
	void testProcessResultOfRefreshConfigOperation();
	void testVmMigrateOnWrongVmHandle();
	void testVmMigrateOnInvalidVmHandle();
	void testVmMigrateOnWrongTargetServerHandle();
	void testVmMigrateOnInvalidTargetServerHandle();
	void testVmMigrateOnNullTargetVmName();
	void testVmMigrateOnNullTargetVmHomePath();
	void testVmMigrateExOnWrongVmHandle();
	void testVmMigrateExOnInvalidVmHandle();
	void testVmMigrateExOnNullTargetServerHost();
	void testVmMigrateExOnNullTargetServerSessionId();
	void testVmMigrateExOnNullTargetVmName();
	void testVmMigrateExOnNullTargetVmHomePath();
	void testSubscribeToPerfStats();
	void testGetPerfStats();
	void testGetPerfStatsForBinaryParam();
	void testSubscribeToPerfStatsForBinaryParam();
	void testVmGetSuspendedScreenOnWrongVmState();
	void testVmGetSuspendedScreenOnInvalidHandle();
	void testVmGetSuspendedScreenOnSuccess();
	void testRunCompressorOnWrongVmState();
	void testRunCompressorOnInvalidHandle();
	void testCancelCompressorOnInvalidHandle();
	void testCancelCompressorOnWrongVmState();
	void testCheckSourceVmUuidOnNewVmCreation();
	void testSpecifyAbsolutePathAtHardDiskSettings();
	void testRenameVmCheckInternalDiskImagePathValid();
	void testDenyToCreateVmWithAlreadyExistsVmName();
	void testCreateVmWithAlreadyExistsVmNameCheckHardImagePath();
	void testVmRestartOnWrongParams();
	void testIsSmartGuardEnabled();
	void testSetSmartGuardEnabled();
	void testSmartGuardEnabledOnWrongParams();
	void testIsSmartGuardNotifyBeforeCreation();
	void testSetSmartGuardNotifyBeforeCreation();
	void testSmartGuardNotifyBeforeCreationOnWrongParams();
	void testGetSmartGuardInterval();
	void testSetSmartGuardInterval();
	void testSmartGuardIntervalOnWrongParams();
	void testGetSmartGuardMaxSnapshotsCount();
	void testSetSmartGuardMaxSnapshotsCount();
	void testSmartGuardMaxSnapshotsCountOnWrongParams();
	void testConfigBackupFileOnExisting();
	void testIsSharedProfileEnabled();
	void testSetSharedProfileEnabled();
	void testSharedProfileEnabledOnWrongParams();
	void testIsUseDesktop();
	void testSetUseDesktop();
	void testUseDesktopOnWrongParams();
	void testIsUseDocuments();
	void testSetUseDocuments();
	void testUseDocumentsOnWrongParams();
	void testIsUsePictures();
	void testSetUsePictures();
	void testUsePicturesOnWrongParams();
	void testIsUseMusic();
	void testSetUseMusic();
	void testUseMusicOnWrongParams();
	void testIsUseDownloads();
	void testSetUseDownloads();
	void testUseDownloadsOnWrongParams();
	void testIsUseMovies();
	void testSetUseMovies();
	void testUseMoviesOnWrongParams();
	void testRestoreVm();
	void testRestoreVmOnWrongParams();
	void testGetConfigValidity();
	void testGetConfigValidityOnWrongParams();
	void testStartVncServerOnNotStartedVm();
	void testStartVncServerOnNotEnoughUserRights();
	void testStartVncServerOnNotEnoughUserRights2();
	void testStartVncServerOnNullVmHandle();
	void testStartVncServerOnNonVmHandle();
	void testStopVncServerOnNotStartedVm();
	void testStopVncServerOnNotEnoughUserRights();
	void testStopVncServerOnNotEnoughUserRights2();
	void testStopVncServerOnNullVmHandle();
	void testStopVncServerOnNonVmHandle();
	void testCheckVncServerStatusOnNotStartedVm();
	void testVmInfoIsVncServerStartedOnNullPointer();
	void testVmInfoIsVncServerStartedOnNullVmInfoHandle();
	void testVmInfoIsVncServerStartedOnNonVmInfoHandle();
	void testVmGetSearchDomains();
	void testVmGetSearchDomainsOnNullPtr();
	void testVmGetSearchDomainsOnNullVmHandle();
	void testVmGetSearchDomainsOnNonVmHandle();
	void testSetSearchDomains();
	void testSetSearchDomainsOnNullVmHandle();
	void testSetSearchDomainsOnNonVmHandle();
	void testSetSearchDomainsOnNonStringsListHandle();
	void testSetSearchDomainsSetEmptyListAsNullListHandle();
	void testAuthWithGuestSecurityDb();
	void testAuthWithGuestSecurityDbOnNullVmHandle();
	void testAuthWithGuestSecurityDbOnNonVmHandle();
	void testAuthWithGuestSecurityDbOnEmptyOrNullUserLogin();
	void testSetOptimizeModifiersMode();
	void testOptimizeModifiersModeOnWrongParams();
	void testIsShareClipboard();
	void testSetShareClipboard();
	void testShareClipboardOnWrongParams();
	void testIsTimeSynchronizationEnabled();
	void testSetTimeSynchronizationEnabled();
	void testTimeSynchronizationEnabledOnWrongParams();
	void testIsTimeSyncSmartModeEnabled();
	void testSetTimeSyncSmartModeEnabled();
	void testTimeSyncSmartModeEnabledOnWrongParams();
	void testGetTimeSyncInterval();
	void testSetTimeSyncInterval();
	void testTimeSyncIntervalOnWrongParams();
	void testEditDescriptionStartupOptionsNotAffected();
	void testIsAllowSelectBootDevice();
	void testIsAllowSelectBootDeviceOnWrongParams();
	void testSetAllowSelectBootDevice();
	void testSetAllowSelectBootDeviceOnWrongParams();
	void testGetAllDevices();
	void testGetAllDevicesOnWrongParams();
	void testIsLockInFullScreenMode();
	void testIsLockInFullScreenModeOnWrongParams();
	void testSetLockInFullScreenMode();
	void testSetLockInFullScreenModeOnWrongParams();
	void testGetActionOnWindowClose();
	void testGetActionOnWindowCloseOnWrongParams();
	void testSetActionOnWindowClose();
	void testSetActionOnWindowCloseOnWrongParams();
	void testSetActionOnStopMode();
	void testActionOnStopModeOnWrongParams();
	void testGetVmLocation();
	void testGetVmLocationOnWrongParams();
	void testGetVmLocationOnInvalidVm();
	void testIsUseDefaultAnswers();
	void testIsUseDefaultAnswersOnWrongParams();
	void testSetUseDefaultAnswers();
	void testSetUseDefaultAnswersOnWrongParams();
	void testCancelCompactOnWrongParams();
	void testCompactOnWrongParams();
	void testCompactOnInvalidArgFromVm();
	void testCompactOnInvalidVmState();
	void testStartVmInCompactModeOnSuspendState();
	void testVmCompactOnSuspendState();
	void testAutoCompressEnabled();
	void testAutoCompressEnabledOnWrongParams();
	void testAutoCompressInterval();
	void testAutoCompressIntervalOnWrongParams();
	void testFreeDiskSpaceRatio();
	void testFreeDiskSpaceRatioOnWrongParams();
	void testChangeSid();
	void testChangeSid2();
	void testChangeSidOnWrongParams();
	void testGetAndAssemblyPackedReportForRunningVm();
	void testVmGetVmInfo();
	void testVmGetVmInfoOnNullPtr();
	void testVmGetVmInfoOnNullVmHandle();
	void testVmGetVmInfoOnNonVmHandle();
	void testLinkedCloneVm();
	void testTryToLinkedCloneVmWithoutSnapshotsOnReadOnlyAccess();
	void testVmConvertDisksOnWrongParams();
	void testGetVmHddsSize();
	void testGetAppTemplateList();
	void testGetAppTemplateListOnWrongParams();
	void testSetAppTemplateList();
	void testSetAppTemplateListOnWrongParams();
	void testAutoVirtualNetworksConfigureDuringVmCreation();
	void testAutoVirtualNetworksConfigureDuringVmRegistration();
	void testCheckAutoStartModeAtRegistrationVm();
	void testIsVmRamHotplugEnabled();
	void testSetVmRamHotplugEnabled();
	void testVmRamHotplugEnabledOnWrongParams();
	void testCreateBackupOnWrongServerHandle();
	void testCreateBackupOnInvalidServerHandle();
	void testCreateBackupOnNullVmUuid();
	void testCreateBackupOnNullTargetHost();
	void testCreateBackupOnNullTargetSessionId();
	void testRestoreBackupOnWrongServerHandle();
	void testRestoreBackupOnInvalidServerHandle();
	void testRestoreBackupOnNullVmUuid();
	void testRestoreBackupOnNullBackupUuid();
	void testRestoreBackupOnNullTargetHost();
	void testRestoreBackupOnNullTargetSessionId();
	void testGetBackupTreeOnWrongServerHandle();
	void testGetBackupTreeOnInvalidServerHandle();
	void testGetBackupTreeOnNullVmUuid();
	void testGetBackupTreeOnTargetHost();
	void testGetBackupTreeOnTargetSessionId();
	void testGetBackupTree();
	void testGetBackupTreeFlagCombinations();
	void testGetBackupTreeForInexistingBackup();
	void testGetBackupTreeForSingleFullBackup();
	void testGetBackupTreeForSingleIncrementalBackup();
	void testGetBackupTreeForFullBackupChain();
	void testGetBackupTreeForIncrementalBackupChain();
	void testRemoveBackupOnWrongServerHandle();
	void testRemoveBackupOnInvalidServerHandle();
	void testRemoveBackupOnNullVmUuid();
	void testRemoveBackupOnNullBackupUuid();
	void testRemoveBackupOnNullTargetHost();
	void testRemoveBackupOnNullTargetSessionId();
	void testBackupResultOnWrongServerHandle();
	void testBackupResultOnInvalidServerHandle();
	void testBackupResultOnNullBackupUuidBufLength();
	void testVmWithTimeMachine();
	void testVmGetStatisticsExOnWrongParams();
	void testVmDataStatisticOnNoData();
	void testVmDataStatisticOnFilledData();
	void testVmDataStatisticOnWrongParams();
	void testVmDataSegmentsOnWrongParams();
	void testGetVmConfig();
	void testGetVmConfigOnWrongParams();
	void testIsEfiEnabled();
	void testSetEfiEnabled();
	void testEfiEnabledOnWrongParams();
 	void testGetExternalBootDevice();
	void testGetExternalBootDeviceOnWrongParams();
	void testSetExternalBootDevice();
	void testSetExternalBootDeviceOnWrongParams();
	void testIsHighAvailabilityEnabled();
	void testSetHighAvailabilityEnabled();
	void testHighAvailabilityEnabledOnWrongParams();
	void testHighAvailabilityPriority();
	void testHighAvailabilityPriorityOnWrongParams();
	void testIsVerticalSynchronizationEnabled();
	void testSetVerticalSynchronizationEnabled();
	void testIsHighResolutionEnabled();
	void testSetHighResolutionEnabled();
	void testHighResolutionEnabledOnWrongParams();
	void testVerticalSynchronizationEnabledOnWrongParams();
	void testSetAdaptiveHypervisorEnabled();
	void testAdaptiveHypervisorEnabledOnWrongParams();
	void testSetSwitchOffWindowsLogoEnabled();
	void testSwitchOffWindowsLogoEnabledOnWrongParams();
	void testSetLongerBatteryLifeEnabled();
	void testLongerBatteryLifeEnabledOnWrongParams();
	void testSetBatteryStatusEnabled();
	void testBatteryStatusEnabledOnWrongParams();
	void testSetNestedVirtualizationEnabled();
	void testNestedVirtualizationEnabledOnWrongParams();
	void testSetPMUVirtualizationEnabled();
	void testPMUVirtualizationEnabledOnWrongParams();
	void testSetLockGuestOnSuspendEnabled();
	void testLockGuestOnSuspendEnabledOnWrongParams();
	void testSetIsolatedVmEnabled();
	void testIsolatedVmEnabledOnWrongParams();

private:
	void test_login();
	void test_logout();
	bool CheckOwnVmHandlePresentsInResult();
	void testMove();
	void testMoveOnWrongParams();
	void checkGetVmConfigValid(QString sVmName, quint32 nFlags,
				QString sOrigName, QString sOrigUUID);
	void getDefaultOsTemplate(QString &sTemplate);
	void createCacheForDefaultTemplate();
	void verifyBackupTree(const QString &backupTree,
						  const QStringList &backupIds);
private:
	SdkHandleWrap	m_ServerHandle;
	SdkHandleWrap	m_JobHandle;
	SdkHandleWrap	m_VmHandle;
	SdkHandleWrap	m_ResultHandle;
	SdkHandleWrap	m_ClonedVmHandle;
	SdkHandleWrap	m_MovedVmHandle;
	QString			m_qsFile;
};

#endif
