void func_00180bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x00180bd8: addiu $sp, $sp, -0x70
    v0 = 0x21 << 16;                                            // 0x00180bdc: lui $v0, 0x21
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00180bec: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x180c0c;                           // 0x00180bf8: bnez $v1, 0x180c0c
    v0 = 0x8101 << 16;                                          // 0x00180c00: lui $v0, 0x8101
    goto label_0x180c6c;                                        // 0x00180c04: b 0x180c6c
    v0 = v0 | 0x8001;                                           // 0x00180c08: ori $v0, $v0, 0x8001
label_0x180c0c:
    v0 = 0x27 << 16;                                            // 0x00180c0c: lui $v0, 0x27
    v1 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00180c10: lw $v1, -0x537c($v0)
    if (v1 == 0) goto label_0x180c28;                           // 0x00180c14: beqz $v1, 0x180c28
    s1 = 0x27 << 16;                                            // 0x00180c18: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180c1c: lui $v0, 0x8101
    goto label_0x180c6c;                                        // 0x00180c20: b 0x180c6c
    v0 = v0 | 0x10;                                             // 0x00180c24: ori $v0, $v0, 0x10
label_0x180c28:
    PollSema();  // 0x114320                                    // 0x00180c28: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180c2c: lw $a0, -0x4e54($s1)
    local_8 = s0;                                               // 0x00180c30: sw $s0, 8($sp)
    func_00189010();  // 189010                                // 0x00180c38: jal 0x189010
    local_c = s2;                                               // 0x00180c3c: sw $s2, 0xc($sp)
    if (s0 >= 0) goto label_0x180c60;                           // 0x00180c44: bgez $s0, 0x180c60
    /* nop */                                                   // 0x00180c48: nop 
    iSignalSema();  // 0x114300                                 // 0x00180c4c: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180c50: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00180c54: lui $v0, 0x8101
    goto label_0x180c6c;                                        // 0x00180c58: b 0x180c6c
    v0 = v0 | 0x8002;                                           // 0x00180c5c: ori $v0, $v0, 0x8002
label_0x180c60:
    iSignalSema();  // 0x114300                                 // 0x00180c60: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00180c64: lw $a0, -0x4e54($s1)
label_0x180c6c:
    return;                                                     // 0x00180c7c: jr $ra
    sp = sp + 0x70;                                             // 0x00180c80: addiu $sp, $sp, 0x70
}