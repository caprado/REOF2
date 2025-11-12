void func_0019c7a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c;
    
    sp = sp + -0x50;                                            // 0x0019c7a0: addiu $sp, $sp, -0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c7ac: addu.qb $zero, $sp, $s1
    func_0019ceb0();  // 0x19ce60                                // 0x0019c7b8: jal 0x19ce60
    local_4c = v0;                                              // 0x0019c7c0: sw $v0, 0x4c($sp)
    a2 = local_4c;                                              // 0x0019c7c4: lw $a2, 0x4c($sp)
    if (a2 != 0) goto label_0x19c7d8;                           // 0x0019c7c8: bnez $a2, 0x19c7d8
    v1 = a2 & 0xffff;                                           // 0x0019c7cc: andi $v1, $a2, 0xffff
    goto label_0x19c858;                                        // 0x0019c7d0: b 0x19c858
label_0x19c7d8:
    v0 = 0x29 << 16;                                            // 0x0019c7d8: lui $v0, 0x29
    a3 = v1 + -1;                                               // 0x0019c7dc: addiu $a3, $v1, -1
    v0 = v0 + -0x7380;                                          // 0x0019c7e0: addiu $v0, $v0, -0x7380
    v1 = a3 << 3;                                               // 0x0019c7e4: sll $v1, $a3, 3
    v1 = v1 - a3;                                               // 0x0019c7ec: subu $v1, $v1, $a3
    a1 = 1;                                                     // 0x0019c7f0: addiu $a1, $zero, 1
    v1 = v1 << 3;                                               // 0x0019c7f4: sll $v1, $v1, 3
    func_0019ca80();  // 0x19c870                                // 0x0019c7fc: jal 0x19c870
    s2 = v0 + v1;                                               // 0x0019c800: addu $s2, $v0, $v1
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x0019c804: lw $v0, 0x10($s1)
    if (v0 != 0) goto label_0x19c83c;                           // 0x0019c808: bnez $v0, 0x19c83c
    a0 = sp + 0x4c;                                             // 0x0019c810: addiu $a0, $sp, 0x4c
    func_0019ed40();  // 0x19ec00                                // 0x0019c814: jal 0x19ec00
    a1 = 1;                                                     // 0x0019c818: addiu $a1, $zero, 1
    a0 = *(int32_t*)((s2) + 8);                                 // 0x0019c81c: lw $a0, 8($s2)
    thunk_func_001a0a20();  // 0x18dab0                          // 0x0019c820: jal 0x18dab0
    a1 = 2;                                                     // 0x0019c824: addiu $a1, $zero, 2
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x0019c828: sw $v0, 0x24($s2)
    v0 = *(int32_t*)((gp) + -0x6444);                           // 0x0019c82c: lw $v0, -0x6444($gp)
    v0 = v0 + 1;                                                // 0x0019c830: addiu $v0, $v0, 1
    goto label_0x19c854;                                        // 0x0019c834: b 0x19c854
    *(uint32_t*)((gp) + -0x6444) = v0;                          // 0x0019c838: sw $v0, -0x6444($gp)
label_0x19c83c:
    func_0019de50();  // 0x19da50                                // 0x0019c840: jal 0x19da50
    a0 = local_4c;                                              // 0x0019c848: lw $a0, 0x4c($sp)
    func_0019cb80();  // 0x19ca80                                // 0x0019c84c: jal 0x19ca80
label_0x19c854:
    v0 = local_4c;                                              // 0x0019c854: lw $v0, 0x4c($sp)
label_0x19c858:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019c85c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c860: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c864: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c868: jr $ra
    sp = sp + 0x50;                                             // 0x0019c86c: addiu $sp, $sp, 0x50
}