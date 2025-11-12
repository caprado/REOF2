void func_0015a520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015a520: addiu $sp, $sp, -0x30
    a2 = 0x7fff << 16;                                          // 0x0015a524: lui $a2, 0x7fff
    a2 = a2 | 0xffff;                                           // 0x0015a534: ori $a2, $a2, 0xffff
    s1 = s2 + 0x348;                                            // 0x0015a544: addiu $s1, $s2, 0x348
    v0 = *(int32_t*)(s0);                                       // 0x0015a550: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0015a554: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0015a558: jalr $v1
    a1 = 1;                                                     // 0x0015a55c: addiu $a1, $zero, 1
    t1 = *(int32_t*)(s1);                                       // 0x0015a564: lw $t1, 0($s1)
    v0 = -4;                                                    // 0x0015a568: addiu $v0, $zero, -4
    t0 = t1 & v0;                                               // 0x0015a574: and $t0, $t1, $v0
    v1 = t1 - t0;                                               // 0x0015a578: subu $v1, $t1, $t0
    v1 = v1 << 3;                                               // 0x0015a57c: sll $v1, $v1, 3
    v0 = (v1 < 0x20) ? 1 : 0;                                   // 0x0015a580: slti $v0, $v1, 0x20
    if (v0 != 0) goto label_0x15a594;                           // 0x0015a584: bnez $v0, 0x15a594
    t0 = t0 + 8;                                                // 0x0015a588: addiu $t0, $t0, 8
    v1 = v1 + -0x20;                                            // 0x0015a58c: addiu $v1, $v1, -0x20
    t0 = t0 + 4;                                                // 0x0015a590: addiu $t0, $t0, 4
label_0x15a594:
    v0 = v1 & 7;                                                // 0x0015a594: andi $v0, $v1, 7
    a1 = v1 - v0;                                               // 0x0015a598: subu $a1, $v1, $v0
    *(uint32_t*)((s2) + 0x350) = v0;                            // 0x0015a59c: sw $v0, 0x350($s2)
    a1 = a1 + 7;                                                // 0x0015a5a0: addiu $a1, $a1, 7
    a1 = a1 >> 3;                                               // 0x0015a5a4: sra $a1, $a1, 3
    a1 = t0 + a1;                                               // 0x0015a5a8: addu $a1, $t0, $a1
    a1 = a1 + -4;                                               // 0x0015a5ac: addiu $a1, $a1, -4
    func_00140598();  // 0x1404a0                                // 0x0015a5b0: jal 0x1404a0
    a1 = a1 - t1;                                               // 0x0015a5b4: subu $a1, $a1, $t1
    v1 = *(int32_t*)(s0);                                       // 0x0015a5b8: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015a5c4: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015a5c8: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x0015a5d0: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0015a5d4: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015a5dc: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015a5e0: jalr $v0
    func_0015ac00();  // 0x15aaa8                                // 0x0015a5e8: jal 0x15aaa8
    return;                                                     // 0x0015a604: jr $ra
    sp = sp + 0x30;                                             // 0x0015a608: addiu $sp, $sp, 0x30
}