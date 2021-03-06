
/* A friendly warning from bake.test
 * ----------------------------------------------------------------------------
 * This file is generated. To add/remove testcases modify the 'project.json' of
 * the test project. ANY CHANGE TO THIS FILE IS LOST AFTER (RE)BUILDING!
 * ----------------------------------------------------------------------------
 */

#include <cpp_api.h>

// Testsuite 'Entity'
void Entity_new(void);
void Entity_new_named(void);
void Entity_new_add(void);
void Entity_new_add_2(void);
void Entity_new_set(void);
void Entity_new_set_2(void);
void Entity_add(void);
void Entity_add_2(void);
void Entity_add_entity(void);
void Entity_add_childof(void);
void Entity_add_instanceof(void);
void Entity_remove(void);
void Entity_remove_2(void);
void Entity_remove_entity(void);
void Entity_remove_childof(void);
void Entity_remove_instanceof(void);
void Entity_set(void);
void Entity_set_2(void);
void Entity_replace(void);
void Entity_get_generic(void);
void Entity_get_mut_generic(void);
void Entity_get_generic_w_id(void);
void Entity_get_mut_generic_w_id(void);
void Entity_add_role(void);
void Entity_remove_role(void);
void Entity_has_role(void);
void Entity_trait_role(void);
void Entity_equals(void);
void Entity_has_childof(void);
void Entity_has_instanceof(void);
void Entity_has_instanceof_indirect(void);
void Entity_null_string(void);

// Testsuite 'Traits'
void Traits_add_component_trait(void);
void Traits_add_tag_trait(void);
void Traits_add_tag_trait_to_tag(void);
void Traits_remove_component_trait(void);
void Traits_remove_tag_trait(void);
void Traits_remove_tag_trait_to_tag(void);
void Traits_set_component_trait(void);
void Traits_set_tag_trait(void);
void Traits_system_1_trait_instance(void);
void Traits_system_2_trait_instances(void);
void Traits_override_trait(void);
void Traits_override_tag_trait(void);
void Traits_get_mut_trait(void);
void Traits_get_mut_trait_existing(void);
void Traits_get_mut_trait_tag(void);
void Traits_get_mut_trait_tag_existing(void);
void Traits_type_w_trait(void);
void Traits_type_w_trait_tag(void);
void Traits_type_w_trait_tags(void);
void Traits_type_w_tag_trait(void);
void Traits_override_trait_w_type(void);
void Traits_override_trait_w_type_tag(void);
void Traits_override_tag_trait_w_type(void);

// Testsuite 'Switch'
void Switch_add_case(void);
void Switch_get_case(void);
void Switch_system_w_case(void);
void Switch_system_w_switch(void);
void Switch_add_case_w_type(void);

// Testsuite 'Paths'
void Paths_name(void);
void Paths_path_depth_1(void);
void Paths_path_depth_2(void);
void Paths_entity_lookup_name(void);
void Paths_entity_lookup_depth_1(void);
void Paths_entity_lookup_depth_2(void);

// Testsuite 'Type'
void Type_add_2(void);
void Type_add_instanceof(void);
void Type_add_childof(void);
void Type_1_component(void);
void Type_2_component(void);
void Type_1_component_signature(void);
void Type_2_component_signature(void);

// Testsuite 'System'
void System_action(void);
void System_action_const(void);
void System_action_shared(void);
void System_action_optional(void);
void System_each(void);
void System_each_const(void);
void System_each_shared(void);
void System_each_optional(void);
void System_signature(void);
void System_signature_const(void);
void System_signature_shared(void);
void System_signature_optional(void);
void System_copy_name_on_create(void);
void System_nested_system(void);

// Testsuite 'Trigger'
void Trigger_on_add(void);
void Trigger_on_remove(void);

// Testsuite 'Query'
void Query_action(void);
void Query_action_const(void);
void Query_action_shared(void);
void Query_action_optional(void);
void Query_each(void);
void Query_each_const(void);
void Query_each_shared(void);
void Query_each_optional(void);
void Query_signature(void);
void Query_signature_const(void);
void Query_signature_shared(void);
void Query_signature_optional(void);
void Query_subquery(void);
void Query_subquery_w_expr(void);
void Query_query_single_trait(void);

// Testsuite 'ComponentLifecycle'
void ComponentLifecycle_ctor_on_add(void);
void ComponentLifecycle_dtor_on_remove(void);
void ComponentLifecycle_copy_on_set(void);
void ComponentLifecycle_copy_on_override(void);
void ComponentLifecycle_non_pod_add(void);
void ComponentLifecycle_non_pod_remove(void);
void ComponentLifecycle_non_pod_set(void);
void ComponentLifecycle_non_pod_override(void);
void ComponentLifecycle_get_mut_new(void);
void ComponentLifecycle_get_mut_existing(void);

// Testsuite 'Refs'
void Refs_get_ref(void);
void Refs_ref_after_add(void);
void Refs_ref_after_remove(void);
void Refs_ref_after_set(void);
void Refs_ref_before_set(void);

// Testsuite 'Module'
void Module_import(void);
void Module_lookup_from_scope(void);

// Testsuite 'ImplicitComponents'
void ImplicitComponents_add(void);
void ImplicitComponents_remove(void);
void ImplicitComponents_has(void);
void ImplicitComponents_set(void);
void ImplicitComponents_get(void);
void ImplicitComponents_add_trait(void);
void ImplicitComponents_remove_trait(void);
void ImplicitComponents_module(void);
void ImplicitComponents_system(void);
void ImplicitComponents_system_optional(void);
void ImplicitComponents_query(void);
void ImplicitComponents_implicit_name(void);

// Testsuite 'Snapshot'
void Snapshot_simple_snapshot(void);
void Snapshot_snapshot_iter(void);
void Snapshot_snapshot_iter_w_filter(void);

bake_test_case Entity_testcases[] = {
    {
        "new",
        Entity_new
    },
    {
        "new_named",
        Entity_new_named
    },
    {
        "new_add",
        Entity_new_add
    },
    {
        "new_add_2",
        Entity_new_add_2
    },
    {
        "new_set",
        Entity_new_set
    },
    {
        "new_set_2",
        Entity_new_set_2
    },
    {
        "add",
        Entity_add
    },
    {
        "add_2",
        Entity_add_2
    },
    {
        "add_entity",
        Entity_add_entity
    },
    {
        "add_childof",
        Entity_add_childof
    },
    {
        "add_instanceof",
        Entity_add_instanceof
    },
    {
        "remove",
        Entity_remove
    },
    {
        "remove_2",
        Entity_remove_2
    },
    {
        "remove_entity",
        Entity_remove_entity
    },
    {
        "remove_childof",
        Entity_remove_childof
    },
    {
        "remove_instanceof",
        Entity_remove_instanceof
    },
    {
        "set",
        Entity_set
    },
    {
        "set_2",
        Entity_set_2
    },
    {
        "replace",
        Entity_replace
    },
    {
        "get_generic",
        Entity_get_generic
    },
    {
        "get_mut_generic",
        Entity_get_mut_generic
    },
    {
        "get_generic_w_id",
        Entity_get_generic_w_id
    },
    {
        "get_mut_generic_w_id",
        Entity_get_mut_generic_w_id
    },
    {
        "add_role",
        Entity_add_role
    },
    {
        "remove_role",
        Entity_remove_role
    },
    {
        "has_role",
        Entity_has_role
    },
    {
        "trait_role",
        Entity_trait_role
    },
    {
        "equals",
        Entity_equals
    },
    {
        "has_childof",
        Entity_has_childof
    },
    {
        "has_instanceof",
        Entity_has_instanceof
    },
    {
        "has_instanceof_indirect",
        Entity_has_instanceof_indirect
    },
    {
        "null_string",
        Entity_null_string
    }
};

bake_test_case Traits_testcases[] = {
    {
        "add_component_trait",
        Traits_add_component_trait
    },
    {
        "add_tag_trait",
        Traits_add_tag_trait
    },
    {
        "add_tag_trait_to_tag",
        Traits_add_tag_trait_to_tag
    },
    {
        "remove_component_trait",
        Traits_remove_component_trait
    },
    {
        "remove_tag_trait",
        Traits_remove_tag_trait
    },
    {
        "remove_tag_trait_to_tag",
        Traits_remove_tag_trait_to_tag
    },
    {
        "set_component_trait",
        Traits_set_component_trait
    },
    {
        "set_tag_trait",
        Traits_set_tag_trait
    },
    {
        "system_1_trait_instance",
        Traits_system_1_trait_instance
    },
    {
        "system_2_trait_instances",
        Traits_system_2_trait_instances
    },
    {
        "override_trait",
        Traits_override_trait
    },
    {
        "override_tag_trait",
        Traits_override_tag_trait
    },
    {
        "get_mut_trait",
        Traits_get_mut_trait
    },
    {
        "get_mut_trait_existing",
        Traits_get_mut_trait_existing
    },
    {
        "get_mut_trait_tag",
        Traits_get_mut_trait_tag
    },
    {
        "get_mut_trait_tag_existing",
        Traits_get_mut_trait_tag_existing
    },
    {
        "type_w_trait",
        Traits_type_w_trait
    },
    {
        "type_w_trait_tag",
        Traits_type_w_trait_tag
    },
    {
        "type_w_trait_tags",
        Traits_type_w_trait_tags
    },
    {
        "type_w_tag_trait",
        Traits_type_w_tag_trait
    },
    {
        "override_trait_w_type",
        Traits_override_trait_w_type
    },
    {
        "override_trait_w_type_tag",
        Traits_override_trait_w_type_tag
    },
    {
        "override_tag_trait_w_type",
        Traits_override_tag_trait_w_type
    }
};

bake_test_case Switch_testcases[] = {
    {
        "add_case",
        Switch_add_case
    },
    {
        "get_case",
        Switch_get_case
    },
    {
        "system_w_case",
        Switch_system_w_case
    },
    {
        "system_w_switch",
        Switch_system_w_switch
    },
    {
        "add_case_w_type",
        Switch_add_case_w_type
    }
};

bake_test_case Paths_testcases[] = {
    {
        "name",
        Paths_name
    },
    {
        "path_depth_1",
        Paths_path_depth_1
    },
    {
        "path_depth_2",
        Paths_path_depth_2
    },
    {
        "entity_lookup_name",
        Paths_entity_lookup_name
    },
    {
        "entity_lookup_depth_1",
        Paths_entity_lookup_depth_1
    },
    {
        "entity_lookup_depth_2",
        Paths_entity_lookup_depth_2
    }
};

bake_test_case Type_testcases[] = {
    {
        "add_2",
        Type_add_2
    },
    {
        "add_instanceof",
        Type_add_instanceof
    },
    {
        "add_childof",
        Type_add_childof
    },
    {
        "1_component",
        Type_1_component
    },
    {
        "2_component",
        Type_2_component
    },
    {
        "1_component_signature",
        Type_1_component_signature
    },
    {
        "2_component_signature",
        Type_2_component_signature
    }
};

bake_test_case System_testcases[] = {
    {
        "action",
        System_action
    },
    {
        "action_const",
        System_action_const
    },
    {
        "action_shared",
        System_action_shared
    },
    {
        "action_optional",
        System_action_optional
    },
    {
        "each",
        System_each
    },
    {
        "each_const",
        System_each_const
    },
    {
        "each_shared",
        System_each_shared
    },
    {
        "each_optional",
        System_each_optional
    },
    {
        "signature",
        System_signature
    },
    {
        "signature_const",
        System_signature_const
    },
    {
        "signature_shared",
        System_signature_shared
    },
    {
        "signature_optional",
        System_signature_optional
    },
    {
        "copy_name_on_create",
        System_copy_name_on_create
    },
    {
        "nested_system",
        System_nested_system
    }
};

bake_test_case Trigger_testcases[] = {
    {
        "on_add",
        Trigger_on_add
    },
    {
        "on_remove",
        Trigger_on_remove
    }
};

bake_test_case Query_testcases[] = {
    {
        "action",
        Query_action
    },
    {
        "action_const",
        Query_action_const
    },
    {
        "action_shared",
        Query_action_shared
    },
    {
        "action_optional",
        Query_action_optional
    },
    {
        "each",
        Query_each
    },
    {
        "each_const",
        Query_each_const
    },
    {
        "each_shared",
        Query_each_shared
    },
    {
        "each_optional",
        Query_each_optional
    },
    {
        "signature",
        Query_signature
    },
    {
        "signature_const",
        Query_signature_const
    },
    {
        "signature_shared",
        Query_signature_shared
    },
    {
        "signature_optional",
        Query_signature_optional
    },
    {
        "subquery",
        Query_subquery
    },
    {
        "subquery_w_expr",
        Query_subquery_w_expr
    },
    {
        "query_single_trait",
        Query_query_single_trait
    }
};

bake_test_case ComponentLifecycle_testcases[] = {
    {
        "ctor_on_add",
        ComponentLifecycle_ctor_on_add
    },
    {
        "dtor_on_remove",
        ComponentLifecycle_dtor_on_remove
    },
    {
        "copy_on_set",
        ComponentLifecycle_copy_on_set
    },
    {
        "copy_on_override",
        ComponentLifecycle_copy_on_override
    },
    {
        "non_pod_add",
        ComponentLifecycle_non_pod_add
    },
    {
        "non_pod_remove",
        ComponentLifecycle_non_pod_remove
    },
    {
        "non_pod_set",
        ComponentLifecycle_non_pod_set
    },
    {
        "non_pod_override",
        ComponentLifecycle_non_pod_override
    },
    {
        "get_mut_new",
        ComponentLifecycle_get_mut_new
    },
    {
        "get_mut_existing",
        ComponentLifecycle_get_mut_existing
    }
};

bake_test_case Refs_testcases[] = {
    {
        "get_ref",
        Refs_get_ref
    },
    {
        "ref_after_add",
        Refs_ref_after_add
    },
    {
        "ref_after_remove",
        Refs_ref_after_remove
    },
    {
        "ref_after_set",
        Refs_ref_after_set
    },
    {
        "ref_before_set",
        Refs_ref_before_set
    }
};

bake_test_case Module_testcases[] = {
    {
        "import",
        Module_import
    },
    {
        "lookup_from_scope",
        Module_lookup_from_scope
    }
};

bake_test_case ImplicitComponents_testcases[] = {
    {
        "add",
        ImplicitComponents_add
    },
    {
        "remove",
        ImplicitComponents_remove
    },
    {
        "has",
        ImplicitComponents_has
    },
    {
        "set",
        ImplicitComponents_set
    },
    {
        "get",
        ImplicitComponents_get
    },
    {
        "add_trait",
        ImplicitComponents_add_trait
    },
    {
        "remove_trait",
        ImplicitComponents_remove_trait
    },
    {
        "module",
        ImplicitComponents_module
    },
    {
        "system",
        ImplicitComponents_system
    },
    {
        "system_optional",
        ImplicitComponents_system_optional
    },
    {
        "query",
        ImplicitComponents_query
    },
    {
        "implicit_name",
        ImplicitComponents_implicit_name
    }
};

bake_test_case Snapshot_testcases[] = {
    {
        "simple_snapshot",
        Snapshot_simple_snapshot
    },
    {
        "snapshot_iter",
        Snapshot_snapshot_iter
    },
    {
        "snapshot_iter_w_filter",
        Snapshot_snapshot_iter_w_filter
    }
};

static bake_test_suite suites[] = {
    {
        "Entity",
        NULL,
        NULL,
        32,
        Entity_testcases
    },
    {
        "Traits",
        NULL,
        NULL,
        23,
        Traits_testcases
    },
    {
        "Switch",
        NULL,
        NULL,
        5,
        Switch_testcases
    },
    {
        "Paths",
        NULL,
        NULL,
        6,
        Paths_testcases
    },
    {
        "Type",
        NULL,
        NULL,
        7,
        Type_testcases
    },
    {
        "System",
        NULL,
        NULL,
        14,
        System_testcases
    },
    {
        "Trigger",
        NULL,
        NULL,
        2,
        Trigger_testcases
    },
    {
        "Query",
        NULL,
        NULL,
        15,
        Query_testcases
    },
    {
        "ComponentLifecycle",
        NULL,
        NULL,
        10,
        ComponentLifecycle_testcases
    },
    {
        "Refs",
        NULL,
        NULL,
        5,
        Refs_testcases
    },
    {
        "Module",
        NULL,
        NULL,
        2,
        Module_testcases
    },
    {
        "ImplicitComponents",
        NULL,
        NULL,
        12,
        ImplicitComponents_testcases
    },
    {
        "Snapshot",
        NULL,
        NULL,
        3,
        Snapshot_testcases
    }
};

int main(int argc, char *argv[]) {
    ut_init(argv[0]);
    return bake_test_run("cpp_api", argc, argv, suites, 13);
}
