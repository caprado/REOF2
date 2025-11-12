void func_00136f70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136f70: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x136f98;                           // 0x00136f78: bnez $a0, 0x136f98
    a0 = 0x22 << 16;                                            // 0x00136f80: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136f84: jal 0x134ec0
    a0 = &str_00224c80;  // "\nSRD/PS2EE Ver.2.18a Build:Jul 28 2003 17:50:12\n" // 0x00136f88: addiu $a0, $a0, 0x4c80
    goto label_0x136fc0;                                        // 0x00136f8c: b 0x136fc0
    /* nop */                                                   // 0x00136f94: nop 
label_0x136f98:
    v0 = str_00224c80;  // "\nSRD/PS2EE Ver.2.18a Build:Jul 28 2003 17:50:12\n" // 0x00136f98: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x60);                              // 0x00136f9c: lw $v0, 0x60($v0)
    if (v0 == 0) goto label_0x136fbc;                           // 0x00136fa0: beqz $v0, 0x136fbc
    a1 = 0x12b;                                                 // 0x00136fa4: addiu $a1, $zero, 0x12b
    a0 = g_00224c84;  // Global at 0x00224c84                   // 0x00136fa8: lw $a0, 4($a0)
    /* call function at address in v0 */                        // 0x00136fb0: jalr $v0
label_0x136fbc:
label_0x136fc0:
    return;                                                     // 0x00136fc4: jr $ra
    sp = sp + 0x10;                                             // 0x00136fc8: addiu $sp, $sp, 0x10
}