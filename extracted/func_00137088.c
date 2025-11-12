void func_00137088() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00137088: addiu $sp, $sp, -0x20
    s1 = 0x20 << 16;                                            // 0x00137090: lui $s1, 0x20
    func_001413d8();  // 0x1413c0                                // 0x0013709c: jal 0x1413c0
    a0 = 0x22 << 16;                                            // 0x001370a4: lui $a0, 0x22
    v0 = s1 + 0x2188;                                           // 0x001370a8: addiu $v0, $s1, 0x2188
    a0 = &str_00224ce8;  // "SRD: invalid SRD_Destroy.\r\n"     // 0x001370ac: addiu $a0, $a0, 0x4ce8
    if (s0 == v0) goto label_0x1370d0;                          // 0x001370b4: beq $s0, $v0, 0x1370d0
    func_00116598();  // 0x116508                                // 0x001370bc: jal 0x116508
    /* nop */                                                   // 0x001370c0: nop 
    goto label_0x137118;                                        // 0x001370c4: b 0x137118
    /* nop */                                                   // 0x001370cc: nop 
label_0x1370d0:
    a0 = *(int8_t*)((s0) + 2);                                  // 0x001370d0: lb $a0, 2($s0)
    if (a0 == 0) goto label_0x1370f4;                           // 0x001370d4: beqz $a0, 0x1370f4
    v0 = 3;                                                     // 0x001370d8: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1370f4;                          // 0x001370dc: beq $a0, $v0, 0x1370f4
    v0 = 9;                                                     // 0x001370e0: addiu $v0, $zero, 9
    if (a0 == v0) goto label_0x1370f4;                          // 0x001370e4: beq $a0, $v0, 0x1370f4
    a0 = 0x22 << 16;                                            // 0x001370e8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x001370ec: jal 0x116508
    a0 = &str_00224d28;  // "SRD: srd_wait_hst timeout.\r\n"    // 0x001370f0: addiu $a0, $a0, 0x4d28
label_0x1370f4:
    func_00137000();  // 0x136fd0                                // 0x001370f4: jal 0x136fd0
    /* nop */                                                   // 0x001370f8: nop 
    v1 = 0x20 << 16;                                            // 0x001370fc: lui $v1, 0x20
    g_00202188 = 0;  // Global at 0x00202188                    // 0x00137100: sb $zero, 0x2188($s1)
    v1 = v1 + 0x21ec;                                           // 0x00137104: addiu $v1, $v1, 0x21ec
    v0 = g_002021ec;  // Global at 0x002021ec                   // 0x00137108: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0013710c: addiu $v0, $v0, 1
    g_002021ec = v0;  // Global at 0x002021ec                   // 0x00137110: sw $v0, 0($v1)
label_0x137118:
    return func_00141450();  // Tail call                        // 0x00137120: j 0x141438
    sp = sp + 0x20;                                             // 0x00137124: addiu $sp, $sp, 0x20
    sp = sp + -0x40;                                            // 0x00137128: addiu $sp, $sp, -0x40
    a0 = 0x1200;                                                // 0x00137134: addiu $a0, $zero, 0x1200
    func_00137fb0();  // 0x137ec8                                // 0x00137164: jal 0x137ec8
    func_00100e38();  // 0x100d98                                // 0x0013716c: jal 0x100d98
    a0 = 1;                                                     // 0x00137170: addiu $a0, $zero, 1
    a0 = 0x1201;                                                // 0x00137174: addiu $a0, $zero, 0x1201
    func_00137fb0();  // 0x137ec8                                // 0x00137178: jal 0x137ec8
    v1 = 1;                                                     // 0x00137180: addiu $v1, $zero, 1
    if (s0 == v1) goto label_0x1371ec;                          // 0x00137184: beq $s0, $v1, 0x1371ec
    func_001413d8();  // 0x1413c0                                // 0x0013718c: jal 0x1413c0
    /* nop */                                                   // 0x00137190: nop 
    a0 = 1;                                                     // 0x00137194: addiu $a0, $zero, 1
    v1 = g_00200002;  // Global at 0x00200002                   // 0x00137198: lb $v1, 2($s1)
    if (v1 == 0) goto label_0x1371b4;                           // 0x0013719c: beqz $v1, 0x1371b4
    v0 = 3;                                                     // 0x001371a0: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1371b4;                          // 0x001371a4: beq $v1, $v0, 0x1371b4
    v0 = 9;                                                     // 0x001371a8: addiu $v0, $zero, 9
    if (v1 != v0) goto label_0x1371e0;                          // 0x001371ac: bne $v1, $v0, 0x1371e0
    /* nop */                                                   // 0x001371b0: nop 
label_0x1371b4:
    g_00200002 = a0;  // Global at 0x00200002                   // 0x001371b4: sb $a0, 2($s1)
    s4 = 1;                                                     // 0x001371b8: addiu $s4, $zero, 1
    g_00200001 = a0;  // Global at 0x00200001                   // 0x001371bc: sb $a0, 1($s1)
    g_00200008 = s3;  // Global at 0x00200008                   // 0x001371c0: sw $s3, 8($s1)
    /* lwl $v0, 3($s2) */                                       // 0x001371c4: lwl $v0, 3($s2)
    /* lwr $v0, 0($s2) */                                       // 0x001371c8: lwr $v0, 0($s2)
    /* swl $v0, 0x17($s1) */                                    // 0x001371cc: swl $v0, 0x17($s1)
    /* swr $v0, 0x14($s1) */                                    // 0x001371d0: swr $v0, 0x14($s1)
    g_0020000c = s5;  // Global at 0x0020000c                   // 0x001371d4: sw $s5, 0xc($s1)
    g_00200010 = s6;  // Global at 0x00200010                   // 0x001371d8: sw $s6, 0x10($s1)
    g_00200004 = 0;  // Global at 0x00200004                    // 0x001371dc: sw $zero, 4($s1)
label_0x1371e0:
    func_00141450();  // 0x141438                                // 0x001371e0: jal 0x141438
    /* nop */                                                   // 0x001371e4: nop 
label_0x1371ec:
    return;                                                     // 0x0013720c: jr $ra
    sp = sp + 0x40;                                             // 0x00137210: addiu $sp, $sp, 0x40
}