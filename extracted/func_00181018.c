void func_00181018() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00181018: addiu $sp, $sp, -0x30
    v1 = 0x21 << 16;                                            // 0x0018101c: lui $v1, 0x21
    v0 = g_00216010;  // Global at 0x00216010                   // 0x00181024: lw $v0, 0x6010($v1)
    if (v0 != 0) goto label_0x181044;                           // 0x00181030: bnez $v0, 0x181044
    v0 = 0x8101 << 16;                                          // 0x00181038: lui $v0, 0x8101
    goto label_0x1810b4;                                        // 0x0018103c: b 0x1810b4
    v0 = v0 | 0x8001;                                           // 0x00181040: ori $v0, $v0, 0x8001
label_0x181044:
    func_001887a0();  // 0x188758                                // 0x00181044: jal 0x188758
    if (s0 >= 0) goto label_0x181064;                           // 0x00181050: bgez $s0, 0x181064
    s1 = 0x27 << 16;                                            // 0x00181054: lui $s1, 0x27
    v0 = 0x8101 << 16;                                          // 0x00181058: lui $v0, 0x8101
    goto label_0x1810b4;                                        // 0x0018105c: b 0x1810b4
    v0 = v0 | 0x8002;                                           // 0x00181060: ori $v0, $v0, 0x8002
label_0x181064:
    PollSema();  // 0x114320                                    // 0x00181064: jal 0x114320
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181068: lw $a0, -0x4e54($s1)
    a2 = 0x27 << 16;                                            // 0x0018106c: lui $a2, 0x27
    a1 = a2 + -0x5380;                                          // 0x00181070: addiu $a1, $a2, -0x5380
    v0 = g_0026ac84;  // Global at 0x0026ac84                   // 0x00181074: lw $v0, 4($a1)
    /* beqzl $v0, 0x181094 */                                   // 0x00181078: beqzl $v0, 0x181094
    v0 = 0x27 << 16;                                            // 0x0018107c: lui $v0, 0x27
    iSignalSema();  // 0x114300                                 // 0x00181080: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x00181084: lw $a0, -0x4e54($s1)
    v0 = 0x8101 << 16;                                          // 0x00181088: lui $v0, 0x8101
    goto label_0x1810b4;                                        // 0x0018108c: b 0x1810b4
    v0 = v0 | 0x10;                                             // 0x00181090: ori $v0, $v0, 0x10
    v1 = 0x64;                                                  // 0x00181094: addiu $v1, $zero, 0x64
    a0 = g_8100b1a4;  // Global at 0x8100b1a4                   // 0x00181098: lw $a0, -0x4e5c($v0)
    g_0026ac80 = s0;  // Global at 0x0026ac80                   // 0x0018109c: sw $s0, -0x5380($a2)
    iSignalSema();  // 0x114300                                 // 0x001810a0: jal 0x114300
    g_0026ac84 = v1;  // Global at 0x0026ac84                   // 0x001810a4: sw $v1, 4($a1)
    iSignalSema();  // 0x114300                                 // 0x001810a8: jal 0x114300
    a0 = g_0026b1ac;  // Global at 0x0026b1ac                   // 0x001810ac: lw $a0, -0x4e54($s1)
label_0x1810b4:
    return;                                                     // 0x001810c0: jr $ra
    sp = sp + 0x30;                                             // 0x001810c4: addiu $sp, $sp, 0x30
}