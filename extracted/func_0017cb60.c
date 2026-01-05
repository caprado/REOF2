void func_0017cb60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017cb60: addiu $sp, $sp, -0x10
    s0 = 0x21 << 16;                                            // 0x0017cb6c: lui $s0, 0x21
    s0 = s0 + 0x58a0;                                           // 0x0017cb70: addiu $s0, $s0, 0x58a0
    a2 = 0x4a8;                                                 // 0x0017cb74: addiu $a2, $zero, 0x4a8
    func_00107c70();  // 107c70                                // 0x0017cb7c: jal 0x107c70
    v1 = 8;                                                     // 0x0017cb84: addiu $v1, $zero, 8
    g_002158a4 = v1;  // Global at 0x002158a4                   // 0x0017cb88: sw $v1, 4($s0)
    func_0017cec8();  // 17cec8                                // 0x0017cb8c: jal 0x17cec8
    a0 = 1;                                                     // 0x0017cb90: addiu $a0, $zero, 1
    func_00148e88();  // 148e88                                // 0x0017cb94: jal 0x148e88
    /* nop */                                                   // 0x0017cb98: nop 
    return func_00148f20();  // Tail call                       // 0x0017cba4: j 0x148f20
    sp = sp + 0x10;                                             // 0x0017cba8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017cbac: nop 
    sp = sp + -0x10;                                            // 0x0017cbb0: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0017cbb4: lui $v0, 0x21
    s0 = v0 + 0x5898;                                           // 0x0017cbbc: addiu $s0, $v0, 0x5898
    v1 = g_00215898;  // Global at 0x00215898                   // 0x0017cbc0: lw $v1, 0($s0)
    if (v1 <= 0) goto label_0x17cbf8;                           // 0x0017cbc4: blez $v1, 0x17cbf8
    func_0017d400();  // 17d400                                // 0x0017cbcc: jal 0x17d400
    /* nop */                                                   // 0x0017cbd0: nop 
    func_0017a338();  // 17a338                                // 0x0017cbd4: jal 0x17a338
    /* nop */                                                   // 0x0017cbd8: nop 
    func_0017d310();  // 17d310                                // 0x0017cbdc: jal 0x17d310
    /* nop */                                                   // 0x0017cbe0: nop 
    func_00148ec0();  // 148ec0                                // 0x0017cbe4: jal 0x148ec0
    /* nop */                                                   // 0x0017cbe8: nop 
    v0 = g_00215898;  // Global at 0x00215898                   // 0x0017cbec: lw $v0, 0($s0)
    v0 = v0 + -1;                                               // 0x0017cbf0: addiu $v0, $v0, -1
    g_00215898 = v0;  // Global at 0x00215898                   // 0x0017cbf4: sw $v0, 0($s0)
label_0x17cbf8:
    return;                                                     // 0x0017cc00: jr $ra
    sp = sp + 0x10;                                             // 0x0017cc04: addiu $sp, $sp, 0x10
}