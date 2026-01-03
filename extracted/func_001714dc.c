void func_001714dc() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001714dc: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x001714e0: addiu $v0, $zero, 1
    *(uint32_t*)((v1) + 0x78a0) = v0;                           // 0x001714e8: sw $v0, 0x78a0($v1)
    v0 = 0x26 << 16;                                            // 0x001714ec: lui $v0, 0x26
    t0 = v0 + 0x78a8;                                           // 0x001714f4: addiu $t0, $v0, 0x78a8
    a1 = 0xff00 << 16;                                          // 0x00171508: lui $a1, 0xff00
    v0 = *(int32_t*)((a2) + 0x1b30);                            // 0x00171510: lw $v0, 0x1b30($a2)
    func_001698d0();  // 1698d0                                // 0x00171524: jal 0x1698d0
    a1 = a1 | 0xf40;                                            // 0x00171528: ori $a1, $a1, 0xf40
    v0 = 1;                                                     // 0x0017152c: addiu $v0, $zero, 1
    return;                                                     // 0x00171534: jr $ra
    sp = sp + 0x10;                                             // 0x00171538: addiu $sp, $sp, 0x10
}