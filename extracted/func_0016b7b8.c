void func_0016b7b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0016b7b8: addiu $sp, $sp, -0x40
    s0 = s2 + 0x24;                                             // 0x0016b7d0: addiu $s0, $s2, 0x24
    t0 = sp + 4;                                                // 0x0016b7e0: addiu $t0, $sp, 4
    s1 = g_ff000000;  // Global at 0xff000000                   // 0x0016b7e8: lw $s1, 0($a1)
    a2 = *(int32_t*)((s0) + 0x160);                             // 0x0016b7f0: lw $a2, 0x160($s0)
    func_001560c0();  // 1560c0                                // 0x0016b7f4: jal 0x1560c0
    a2 = *(int32_t*)((s0) + 0x164);                             // 0x0016b800: lw $a2, 0x164($s0)
    a1 = s2 + 0xd4;                                             // 0x0016b804: addiu $a1, $s2, 0xd4
    t0 = sp + 4;                                                // 0x0016b80c: addiu $t0, $sp, 4
    func_001560c0();  // 1560c0                                // 0x0016b810: jal 0x1560c0
    a1 = 0xff00 << 16;                                          // 0x0016b81c: lui $a1, 0xff00
    if (s3 != 0) goto label_0x16b830;                           // 0x0016b820: bnez $s3, 0x16b830
    if (v1 == 0) goto label_0x16b83c;                           // 0x0016b828: beqz $v1, 0x16b83c
label_0x16b830:
    func_001698d0();  // 1698d0                                // 0x0016b830: jal 0x1698d0
    a1 = a1 | 0xd0d;                                            // 0x0016b834: ori $a1, $a1, 0xd0d
label_0x16b83c:
    return;                                                     // 0x0016b850: jr $ra
    sp = sp + 0x40;                                             // 0x0016b854: addiu $sp, $sp, 0x40
}