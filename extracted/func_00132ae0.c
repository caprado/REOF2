void func_00132ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132ae0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132b00;                           // 0x00132ae4: bnez $a0, 0x132b00
    a0 = 0x22 << 16;                                            // 0x00132aec: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132af0: jal 0x127d90
    a0 = &str_00223d08;  // "E02080846 ADXT_Pause: parameter error" // 0x00132af4: addiu $a0, $a0, 0x3d08
    goto label_0x132b04;                                        // 0x00132af8: b 0x132b04
    v0 = -1;                                                    // 0x00132afc: addiu $v0, $zero, -1
label_0x132b00:
    v0 = g_00223d79;  // Global at 0x00223d79                   // 0x00132b00: lb $v0, 0x71($a0)
label_0x132b04:
    return;                                                     // 0x00132b08: jr $ra
    sp = sp + 0x10;                                             // 0x00132b0c: addiu $sp, $sp, 0x10
}