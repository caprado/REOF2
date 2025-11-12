void func_00132c40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132c40: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132c60;                           // 0x00132c44: bnez $a0, 0x132c60
    a0 = 0x22 << 16;                                            // 0x00132c4c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132c50: jal 0x127d90
    a0 = &str_00223d68;  // "E02080818 ADXT_GetDecNumSmpl: parameter error" // 0x00132c54: addiu $a0, $a0, 0x3d68
    goto label_0x132c64;                                        // 0x00132c58: b 0x132c64
label_0x132c60:
    v0 = g_00223dda;  // Global at 0x00223dda                   // 0x00132c60: lb $v0, 0x72($a0)
label_0x132c64:
    return;                                                     // 0x00132c68: jr $ra
    sp = sp + 0x10;                                             // 0x00132c6c: addiu $sp, $sp, 0x10
}