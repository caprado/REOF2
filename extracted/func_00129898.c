void func_00129898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129898: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1298b8;                           // 0x0012989c: bnez $a0, 0x1298b8
    a0 = 0x22 << 16;                                            // 0x001298a4: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001298a8: jal 0x127d90
    a0 = &str_002229d8;  // "E9040828:'adxf' is NULL.(ADXF_GetFsizeSct)" // 0x001298ac: addiu $a0, $a0, 0x29d8
    goto label_0x1298bc;                                        // 0x001298b0: b 0x1298bc
    v0 = -3;                                                    // 0x001298b4: addiu $v0, $zero, -3
label_0x1298b8:
    v0 = g_002229ec;  // Global at 0x002229ec                   // 0x001298b8: lw $v0, 0x14($a0)
label_0x1298bc:
    return;                                                     // 0x001298c0: jr $ra
    sp = sp + 0x10;                                             // 0x001298c4: addiu $sp, $sp, 0x10
}