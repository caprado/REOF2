void func_0012dec8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a1 << 0x10;                                            // 0x0012dec8: sll $a1, $a1, 0x10
    if (a2 == 0) return;  // Branch to 0x12df38                 // 0x0012ded0: beqz $a2, 0x12df38
    a3 = a1 >> 0x10;                                            // 0x0012ded4: sra $a3, $a1, 0x10
    a0 = *(int16_t*)((a2) + 8);                                 // 0x0012ded8: lh $a0, 8($a2)
    a1 = *(int16_t*)((a2) + 0xa);                               // 0x0012dedc: lh $a1, 0xa($a2)
    v0 = *(int16_t*)((a2) + 4);                                 // 0x0012dee0: lh $v0, 4($a2)
    v1 = *(int16_t*)((a2) + 6);                                 // 0x0012dee4: lh $v1, 6($a2)
    /* multiply: v0 * a0 -> hi:lo */                            // 0x0012dee8: mult $ac2, $v0, $a0
    a0 = *(uint16_t*)((a2) + 8);                                // 0x0012deec: lhu $a0, 8($a2)
    /* multiply: v1 * a1 -> hi:lo */                            // 0x0012def0: mult $ac3, $v1, $a1
    v0 = v0 + v1;                                               // 0x0012def4: addu $v0, $v0, $v1
    v0 = v0 >> 0xc;                                             // 0x0012def8: sra $v0, $v0, 0xc
    a1 = v0 + a3;                                               // 0x0012defc: addu $a1, $v0, $a3
    v0 = (a1 < 0x7fff) ? 1 : 0;                                 // 0x0012df00: slti $v0, $a1, 0x7fff
    if (v0 == 0) goto label_0x12df20;                           // 0x0012df04: beqz $v0, 0x12df20
    v1 = (a1 < -0x8000) ? 1 : 0;                                // 0x0012df08: slti $v1, $a1, -0x8000
    v0 = -0x8000;                                               // 0x0012df0c: addiu $v0, $zero, -0x8000
    if (v1 == 0) v0 = a1;                                       // 0x0012df10: movz $v0, $a1, $v1
    v0 = v0 << 0x10;                                            // 0x0012df14: sll $v0, $v0, 0x10
    goto label_0x12df24;                                        // 0x0012df18: b 0x12df24
    v1 = v0 >> 0x10;                                            // 0x0012df1c: sra $v1, $v0, 0x10
label_0x12df20:
    v1 = 0x7fff;                                                // 0x0012df20: addiu $v1, $zero, 0x7fff
label_0x12df24:
    *(uint16_t*)((a2) + 0xa) = a0;                              // 0x0012df24: sh $a0, 0xa($a2)
    return;                                                     // 0x0012df2c: jr $ra
    *(uint16_t*)((a2) + 8) = v1;                                // 0x0012df30: sh $v1, 8($a2)
}