void func_001d89c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001d89c0: addiu $sp, $sp, -0xb0
    a2 = a0 & 0xff;                                             // 0x001d89c4: andi $a2, $a0, 0xff
    v1 = 0x4b << 16;                                            // 0x001d89cc: lui $v1, 0x4b
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d89d0: addu.qb $zero, $sp, $s1
    a0 = 0x1f48;                                                // 0x001d89d4: addiu $a0, $zero, 0x1f48
    v1 = v1 + -0x2aff;                                          // 0x001d89dc: addiu $v1, $v1, -0x2aff
    v1 = v1 + s0;                                               // 0x001d89e4: addu $v1, $v1, $s0
    v1 = g_004ad501;  // Global at 0x004ad501                   // 0x001d89e8: lbu $v1, 0($v1)
    if (v1 != 0) goto label_0x1d8a3c;                           // 0x001d89ec: bnez $v1, 0x1d8a3c
    at = 0x31 << 16;                                            // 0x001d89f0: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d89f4: lui $a1, 0x24
    s1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d89f8: lw $s1, 0x37fc($at)
    a0 = sp + 0x30;                                             // 0x001d89fc: addiu $a0, $sp, 0x30
    func_0010a4d8();  // 10a4d8                                // 0x001d8a00: jal 0x10a4d8
    a1 = &str_002476e0;  // "data\\rom\\motion\\npc\\rn%02d_tbl.bin" // 0x001d8a04: addiu $a1, $a1, 0x76e0
    v0 = 2 << 16;                                               // 0x001d8a08: lui $v0, 2
    a0 = sp + 0x30;                                             // 0x001d8a0c: addiu $a0, $sp, 0x30
    func_001d3390();  // 1d3390                                // 0x001d8a18: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8a1c: ori $a2, $v0, 1
    v1 = 0x4b << 16;                                            // 0x001d8a20: lui $v1, 0x4b
    v1 = v1 + -0x2b00;                                          // 0x001d8a28: addiu $v1, $v1, -0x2b00
    a1 = v1 + s0;                                               // 0x001d8a30: addu $a1, $v1, $s0
    func_001d8780();  // 1d8780                                // 0x001d8a34: jal 0x1d8780
label_0x1d8a3c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d8a40: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8a44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8a48: jr $ra
    sp = sp + 0xb0;                                             // 0x001d8a4c: addiu $sp, $sp, 0xb0
}