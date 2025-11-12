void func_001691b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001691b0: addiu $sp, $sp, -0x20
    v0 = 0x18 << 16;                                            // 0x001691b4: lui $v0, 0x18
    a1 = v0 + -0x6b30;                                          // 0x001691c0: addiu $a1, $v0, -0x6b30
    func_001695d8();  // 0x1695a0                                // 0x001691cc: jal 0x1695a0
    a1 = 0x18 << 16;                                            // 0x001691d4: lui $a1, 0x18
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x001691d8: sw $v0, 0x10($s1)
    a1 = a1 + -0x6ae8;                                          // 0x001691dc: addiu $a1, $a1, -0x6ae8
    func_001695d8();  // 0x1695a0                                // 0x001691e0: jal 0x1695a0
    a1 = 0x18 << 16;                                            // 0x001691e8: lui $a1, 0x18
    *(uint32_t*)((s1) + 0x14) = v0;                             // 0x001691ec: sw $v0, 0x14($s1)
    a1 = a1 + -0x6aa0;                                          // 0x001691f0: addiu $a1, $a1, -0x6aa0
    func_001695d8();  // 0x1695a0                                // 0x001691f4: jal 0x1695a0
    a1 = 0x18 << 16;                                            // 0x001691fc: lui $a1, 0x18
    v1 = -1;                                                    // 0x00169200: addiu $v1, $zero, -1
    a1 = a1 + -0x6a58;                                          // 0x00169208: addiu $a1, $a1, -0x6a58
    if (v0 != v1) goto label_0x16921c;                          // 0x0016920c: bne $v0, $v1, 0x16921c
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00169210: sw $v0, 0x18($s1)
    v0 = 2;                                                     // 0x00169214: addiu $v0, $zero, 2
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00169218: sw $v0, 0x18($s1)
label_0x16921c:
    func_001695d8();  // 0x1695a0                                // 0x0016921c: jal 0x1695a0
    /* nop */                                                   // 0x00169220: nop 
    *(uint32_t*)((s1) + 0x1c) = v0;                             // 0x00169224: sw $v0, 0x1c($s1)
    return;                                                     // 0x00169234: jr $ra
    sp = sp + 0x20;                                             // 0x00169238: addiu $sp, $sp, 0x20
}