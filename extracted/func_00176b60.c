void func_00176b60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176b60: addiu $sp, $sp, -0x20
    v0 = -1;                                                    // 0x00176b64: addiu $v0, $zero, -1
    func_00169b10();  // 0x169af0                                // 0x00176b7c: jal 0x169af0
    *(uint32_t*)(s1) = v0;                                      // 0x00176b80: sw $v0, 0($s1)
    a1 = 0xff00 << 16;                                          // 0x00176b84: lui $a1, 0xff00
    if (v0 == 0) goto label_0x176ba8;                           // 0x00176b88: beqz $v0, 0x176ba8
    a1 = a1 | 0x118;                                            // 0x00176b94: ori $a1, $a1, 0x118
    return func_00169940();  // Tail call                        // 0x00176ba0: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00176ba4: addiu $sp, $sp, 0x20
label_0x176ba8:
    v1 = *(int32_t*)((s0) + 0x920);                             // 0x00176ba8: lw $v1, 0x920($s0)
    if (v1 == 0) goto label_0x176bd8;                           // 0x00176bac: beqz $v1, 0x176bd8
    a0 = s0 + 0xcc0;                                            // 0x00176bb0: addiu $a0, $s0, 0xcc0
    v0 = v1 << 2;                                               // 0x00176bb4: sll $v0, $v1, 2
    a1 = g_00230268;  // Global at 0x00230268                   // 0x00176bb8: lw $a1, 0x268($a0)
    a0 = 0x23 << 16;                                            // 0x00176bbc: lui $a0, 0x23
    a0 = a0 + v0;                                               // 0x00176bc0: addu $a0, $a0, $v0
    a0 = g_00229370;  // Global at 0x00229370                   // 0x00176bc4: lw $a0, -0x6c90($a0)
    func_0015b7b0();  // 0x15b740                                // 0x00176bc8: jal 0x15b740
    a2 = 0x3e8;                                                 // 0x00176bcc: addiu $a2, $zero, 0x3e8
    *(uint32_t*)(s1) = v0;                                      // 0x00176bd0: sw $v0, 0($s1)
label_0x176bd8:
    return;                                                     // 0x00176be4: jr $ra
    sp = sp + 0x20;                                             // 0x00176be8: addiu $sp, $sp, 0x20
}