void func_00135fa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135fa8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135fd0;                           // 0x00135fb4: bnez $a0, 0x135fd0
    a0 = 0x22 << 16;                                            // 0x00135fbc: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00135fc0: jal 0x134ec0
    a0 = &str_00224520;  // "cvFsGetSctLen #2:vtbl error"       // 0x00135fc4: addiu $a0, $a0, 0x4520
    goto label_0x135ffc;                                        // 0x00135fc8: b 0x135ffc
label_0x135fd0:
    v0 = str_00224520;  // "cvFsGetSctLen #2:vtbl error"        // 0x00135fd0: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x30);                              // 0x00135fd4: lw $v0, 0x30($v0)
    /* beqzl $v0, 0x135ff0 */                                   // 0x00135fd8: beqzl $v0, 0x135ff0
    a0 = 0x22 << 16;                                            // 0x00135fdc: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135fe0: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135fe4: lw $a0, 4($a0)
    goto label_0x135ff8;                                        // 0x00135fe8: b 0x135ff8
    func_00134fb0();  // 0x134ec0                                // 0x00135ff0: jal 0x134ec0
    a0 = &str_00224540;  // "cvFsSetSctLen #3:handle error"     // 0x00135ff4: addiu $a0, $a0, 0x4540
label_0x135ff8:
label_0x135ffc:
    return;                                                     // 0x00136004: jr $ra
    sp = sp + 0x10;                                             // 0x00136008: addiu $sp, $sp, 0x10
}