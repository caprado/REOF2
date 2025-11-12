void func_00179650() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int8_t*)(a0);                                        // 0x00179650: lb $v1, 0($a0)
    v0 = 0x2e;                                                  // 0x00179654: addiu $v0, $zero, 0x2e
    if (v1 == v0) goto label_0x1796cc;                          // 0x00179658: beq $v1, $v0, 0x1796cc
    v0 = 0x20;                                                  // 0x00179660: addiu $v0, $zero, 0x20
    if (v1 == v0) goto label_0x1796d0;                          // 0x00179664: beql $v1, $v0, 0x1796d0
    *(uint32_t*)(a1) = a2;                                      // 0x00179668: sw $a2, 0($a1)
    /* beqzl $v1, 0x1796d0 */                                   // 0x0017966c: beqzl $v1, 0x1796d0
    *(uint32_t*)(a1) = a2;                                      // 0x00179670: sw $a2, 0($a1)
    v0 = v1 + -0x30;                                            // 0x00179674: addiu $v0, $v1, -0x30
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x00179678: sltiu $v0, $v0, 0xa
    /* beqzl $v0, 0x1796d0 */                                   // 0x0017967c: beqzl $v0, 0x1796d0
    *(uint32_t*)(a1) = a2;                                      // 0x00179680: sw $a2, 0($a1)
    t0 = 0x2e;                                                  // 0x00179684: addiu $t0, $zero, 0x2e
    a3 = 0x20;                                                  // 0x00179688: addiu $a3, $zero, 0x20
    v0 = a2 << 2;                                               // 0x0017968c: sll $v0, $a2, 2
    a0 = a0 + 1;                                                // 0x00179690: addiu $a0, $a0, 1
    v0 = v0 + a2;                                               // 0x00179694: addu $v0, $v0, $a2
    v0 = v0 << 1;                                               // 0x00179698: sll $v0, $v0, 1
    v0 = v0 + v1;                                               // 0x0017969c: addu $v0, $v0, $v1
    v1 = *(int8_t*)(a0);                                        // 0x001796a0: lb $v1, 0($a0)
    a2 = v0 + -0x30;                                            // 0x001796a4: addiu $a2, $v0, -0x30
    if (v1 == t0) goto label_0x1796cc;                          // 0x001796a8: beq $v1, $t0, 0x1796cc
    v0 = v1 + -0x30;                                            // 0x001796ac: addiu $v0, $v1, -0x30
    if (v1 == a3) goto label_0x1796d0;                          // 0x001796b0: beql $v1, $a3, 0x1796d0
    *(uint32_t*)(a1) = a2;                                      // 0x001796b4: sw $a2, 0($a1)
    /* beqzl $v1, 0x1796d0 */                                   // 0x001796b8: beqzl $v1, 0x1796d0
    *(uint32_t*)(a1) = a2;                                      // 0x001796bc: sw $a2, 0($a1)
    v0 = ((unsigned)v0 < (unsigned)0xa) ? 1 : 0;                // 0x001796c0: sltiu $v0, $v0, 0xa
    /* bnezl $v0, 0x179690 */                                   // 0x001796c4: bnezl $v0, 0x179690
    v0 = a2 << 2;                                               // 0x001796c8: sll $v0, $a2, 2
label_0x1796cc:
    *(uint32_t*)(a1) = a2;                                      // 0x001796cc: sw $a2, 0($a1)
label_0x1796d0:
    return;                                                     // 0x001796d0: jr $ra
}