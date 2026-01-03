void func_001aea70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001aea70: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001aea74: lui $v0, 0x22
    g_003137f0 = a0;  // Global at 0x003137f0                   // 0x001aea78: sb $a0, 0x37f0($at)
    v0 = v0 + -0x40f0;                                          // 0x001aea7c: addiu $v0, $v0, -0x40f0
    a0 = a0 << 2;                                               // 0x001aea80: sll $a0, $a0, 2
    at = 0x31 << 16;                                            // 0x001aea84: lui $at, 0x31
    a0 = v0 + a0;                                               // 0x001aea88: addu $a0, $v0, $a0
    v1 = a1 << 2;                                               // 0x001aea8c: sll $v1, $a1, 2
    v0 = 0x22 << 16;                                            // 0x001aea90: lui $v0, 0x22
    g_003137f1 = a1;  // Global at 0x003137f1                   // 0x001aea94: sb $a1, 0x37f1($at)
    v0 = v0 + -0x40c0;                                          // 0x001aea98: addiu $v0, $v0, -0x40c0
    v0 = v0 + v1;                                               // 0x001aea9c: addu $v0, $v0, $v1
    v1 = *(int32_t*)(a0);                                       // 0x001aeaa0: lw $v1, 0($a0)
    v0 = g_0021bf40;  // Global at 0x0021bf40                   // 0x001aeaa4: lw $v0, 0($v0)
    a0 = 0x5e;                                                  // 0x001aeaa8: addiu $a0, $zero, 0x5e
    return func_001aefe0();  // Tail call                        // 0x001aeaac: j 0x1aefd0
    a1 = v1 | v0;                                               // 0x001aeab0: or $a1, $v1, $v0
    /* nop */                                                   // 0x001aeab4: nop 
    /* nop */                                                   // 0x001aeab8: nop 
    /* nop */                                                   // 0x001aeabc: nop 
    sp = sp + -0x10;                                            // 0x001aeac0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001aeac4: lui $at, 0x31
    v1 = g_003137f2;  // Global at 0x003137f2                   // 0x001aeacc: lbu $v1, 0x37f2($at)
    if (v1 == a0) goto label_0x1aeaf4;                          // 0x001aead0: beq $v1, $a0, 0x1aeaf4
    at = 0x31 << 16;                                            // 0x001aead4: lui $at, 0x31
    v1 = a0 << 2;                                               // 0x001aead8: sll $v1, $a0, 2
    v0 = gp + -0x7d18;                                          // 0x001aeadc: addiu $v0, $gp, -0x7d18
    g_003137f2 = a0;  // Global at 0x003137f2                   // 0x001aeae0: sb $a0, 0x37f2($at)
    v0 = v0 + v1;                                               // 0x001aeae4: addu $v0, $v0, $v1
    a1 = g_0021bf40;  // Global at 0x0021bf40                   // 0x001aeae8: lw $a1, 0($v0)
    func_001aefd0();  // 1aefd0                                // 0x001aeaec: jal 0x1aefd0
    a0 = 0x63;                                                  // 0x001aeaf0: addiu $a0, $zero, 0x63
label_0x1aeaf4:
    return;                                                     // 0x001aeaf8: jr $ra
    sp = sp + 0x10;                                             // 0x001aeafc: addiu $sp, $sp, 0x10
}