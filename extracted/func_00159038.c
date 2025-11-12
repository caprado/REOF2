void func_00159038() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00159038: addiu $sp, $sp, -0x30
    func_0015b498();  // 0x15b470                                // 0x0015905c: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00159064: lui $a1, 0xff03
    a2 = 3 << 16;                                               // 0x00159068: lui $a2, 3
    a1 = a1 | 0x20f;                                            // 0x00159070: ori $a1, $a1, 0x20f
    if (v0 == 0) goto label_0x159098;                           // 0x00159074: beqz $v0, 0x159098
    a2 = a2 | 0xffff;                                           // 0x00159078: ori $a2, $a2, 0xffff
    return func_00158c48();  // Tail call                        // 0x00159090: j 0x158bf8
    sp = sp + 0x30;                                             // 0x00159094: addiu $sp, $sp, 0x30
label_0x159098:
    v0 = *(int32_t*)((s0) + 0x280);                             // 0x00159098: lw $v0, 0x280($s0)
    v0 = v0 << 0xb;                                             // 0x0015909c: sll $v0, $v0, 0xb
    *(uint32_t*)(s1) = v0;                                      // 0x001590a0: sw $v0, 0($s1)
    v1 = *(int32_t*)((s0) + 0x290);                             // 0x001590a4: lw $v1, 0x290($s0)
    *(uint32_t*)(s2) = v1;                                      // 0x001590a8: sw $v1, 0($s2)
    a0 = *(int32_t*)((s0) + 0x27c);                             // 0x001590ac: lw $a0, 0x27c($s0)
    if (a0 != a2) goto label_0x1590c0;                          // 0x001590b0: bnel $a0, $a2, 0x1590c0
    v0 = *(int32_t*)((s0) + 0x290);                             // 0x001590b4: lw $v0, 0x290($s0)
    goto label_0x1590d8;                                        // 0x001590b8: b 0x1590d8
    v0 = -1;                                                    // 0x001590bc: addiu $v0, $zero, -1
label_0x1590c0:
    v1 = 0x708;                                                 // 0x001590c0: addiu $v1, $zero, 0x708
    /* beqzl $v1, 0x1590cc */                                   // 0x001590c4: beqzl $v1, 0x1590cc
    /* break (trap) */                                          // 0x001590c8: break 0, 7
    /* multiply: v0 * a0 -> hi:lo */                            // 0x001590cc: mult $ac2, $v0, $a0
    /* divide: v0 / v1 -> hi:lo */                              // 0x001590d0: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x001590d4
label_0x1590d8:
    *(uint32_t*)(s3) = v0;                                      // 0x001590d8: sw $v0, 0($s3)
    return;                                                     // 0x001590f4: jr $ra
    sp = sp + 0x30;                                             // 0x001590f8: addiu $sp, $sp, 0x30
}