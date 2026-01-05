void func_0018dc30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018dc30: addiu $sp, $sp, -0x20
    v0 = a1 + -1;                                               // 0x0018dc34: addiu $v0, $a1, -1
    at = 0x29 << 16;                                            // 0x0018dc3c: lui $at, 0x29
    a2 = ~v0;                                                   // 0x0018dc44: not $a2, $v0
    a3 = g_00290380;  // Global at 0x00290380                   // 0x0018dc48: lw $a3, 0x380($at)
    at = 0x29 << 16;                                            // 0x0018dc50: lui $at, 0x29
    v0 = a3 + a1;                                               // 0x0018dc54: addu $v0, $a3, $a1
    v1 = g_0029037c;  // Global at 0x0029037c                   // 0x0018dc58: lw $v1, 0x37c($at)
    v0 = v0 + -1;                                               // 0x0018dc5c: addiu $v0, $v0, -1
    v0 = a2 & v0;                                               // 0x0018dc60: and $v0, $a2, $v0
    a0 = v0 + a0;                                               // 0x0018dc64: addu $a0, $v0, $a0
    at = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x0018dc68: sltu $at, $v1, $a0
    if (at == 0) goto label_0x18dc88;                           // 0x0018dc6c: beqz $at, 0x18dc88
    /* nop */                                                   // 0x0018dc70: nop 
    func_0018d4c0();  // 18d4c0                                // 0x0018dc74: jal 0x18d4c0
    /* nop */                                                   // 0x0018dc78: nop 
    at = 0x29 << 16;                                            // 0x0018dc7c: lui $at, 0x29
    v0 = g_00290378;  // Global at 0x00290378                   // 0x0018dc80: lw $v0, 0x378($at)
    a0 = v0 + s0;                                               // 0x0018dc84: addu $a0, $v0, $s0
label_0x18dc88:
    at = 0x29 << 16;                                            // 0x0018dc88: lui $at, 0x29
    g_00290380 = a0;  // Global at 0x00290380                   // 0x0018dc8c: sw $a0, 0x380($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018dc94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018dc98: jr $ra
    sp = sp + 0x20;                                             // 0x0018dc9c: addiu $sp, $sp, 0x20
}