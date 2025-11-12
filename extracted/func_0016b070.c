void func_0016b070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016b070: addiu $sp, $sp, -0x20
    s1 = s0 + 0x1ae4;                                           // 0x0016b080: addiu $s1, $s0, 0x1ae4
    func_00167980();  // 0x167960                                // 0x0016b094: jal 0x167960
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x0016b098: lw $a1, 0x18($s1)
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x0016b0a0: lw $a1, 0x14($s1)
    func_00167980();  // 0x167960                                // 0x0016b0a4: jal 0x167960
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x0016b0b0: lw $a1, 0x1c($s1)
    return func_00167980();  // Tail call                        // 0x0016b0c8: j 0x167960
    sp = sp + 0x20;                                             // 0x0016b0cc: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0016b0d0: addiu $sp, $sp, -0x10
    func_0016a320();  // 0x16a2f8                                // 0x0016b0dc: jal 0x16a2f8
    a2 = *(int32_t*)((s0) + 8);                                 // 0x0016b0e4: lw $a2, 8($s0)
    s0 = s0 + 0x9a0;                                            // 0x0016b0ec: addiu $s0, $s0, 0x9a0
    if (a2 > 0) goto label_0x16b100;                            // 0x0016b0f4: bgtz $a2, 0x16b100
    a3 = *(int32_t*)((s0) + 0x58);                              // 0x0016b0f8: lw $a3, 0x58($s0)
    a2 = *(int32_t*)((v0) + 0xc);                               // 0x0016b0fc: lw $a2, 0xc($v0)
label_0x16b100:
    v0 = (0 < a2) ? 1 : 0;                                      // 0x0016b100: slt $v0, $zero, $a2
    if (v0 == 0) a2 = a3;                                       // 0x0016b104: movz $a2, $a3, $v0
    v1 = (a2 < a3) ? 1 : 0;                                     // 0x0016b108: slt $v1, $a2, $a3
    func_001672a8();  // 0x167208                                // 0x0016b110: jal 0x167208
    if (v1 == 0) s0 = a3;                                       // 0x0016b114: movz $s0, $a3, $v1
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x0016b118: slt $v0, $v0, $s0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016b124: sltiu $v0, $v0, 1
    return;                                                     // 0x0016b128: jr $ra
    sp = sp + 0x10;                                             // 0x0016b12c: addiu $sp, $sp, 0x10
}