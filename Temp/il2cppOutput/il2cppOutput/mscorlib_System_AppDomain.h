#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t695;
// System.Security.Policy.Evidence
struct Evidence_t1207;
// System.Security.PermissionSet
struct PermissionSet_t1208;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1529;
// System.AppDomain
struct AppDomain_t560;
// System.AppDomainManager
struct AppDomainManager_t1541;
// System.ActivationContext
struct ActivationContext_t1539;
// System.ApplicationIdentity
struct ApplicationIdentity_t1542;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1543;
// System.ResolveEventHandler
struct ResolveEventHandler_t1544;
// System.EventHandler
struct EventHandler_t1170;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t561;

#include "mscorlib_System_MarshalByRefObject.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"

// System.AppDomain
struct  AppDomain_t560  : public MarshalByRefObject_t849
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t1207 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t1208 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1541 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t1539 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1542 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t1543 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t1544 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1170 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1170 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t1544 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t1544 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t561 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t1544 * ___ReflectionOnlyAssemblyResolve_21;
};
struct AppDomain_t560_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t560 * ___default_domain_10;
};
struct AppDomain_t560_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t695 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t695 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t695 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal_9;
};
