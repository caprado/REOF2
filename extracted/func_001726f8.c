void func_001726f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001726f8: addiu $sp, $sp, -0x10
    t0 = 1;                                                     // 0x001726fc: addiu $t0, $zero, 1
    a1 = s0 + 0x9a0;                                            // 0x0017270c: addiu $a1, $s0, 0x9a0
    a2 = 2;                                                     // 0x00172710: addiu $a2, $zero, 2
    a3 = 2;                                                     // 0x00172714: addiu $a3, $zero, 2
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x00172718: lw $v0, 0x18($a1)
    v1 = *(int32_t*)((a1) + 0x14);                              // 0x0017271c: lw $v1, 0x14($a1)
    v0 = v0 ^ t0;                                               // 0x00172720: xor $v0, $v0, $t0
    a1 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00172724: sltiu $a1, $v0, 1
    v1 = v1 ^ t0;                                               // 0x00172728: xor $v1, $v1, $t0
    v0 = a1 | 2;                                                // 0x0017272c: ori $v0, $a1, 2
    if (v1 == 0) a1 = v0;                                       // 0x00172730: movz $a1, $v0, $v1
    if (a1 == a2) goto label_0x17276c;                          // 0x00172734: beq $a1, $a2, 0x17276c
    v0 = ((unsigned)a1 < (unsigned)3) ? 1 : 0;                  // 0x00172738: sltiu $v0, $a1, 3
    /* beqzl $v0, 0x172758 */                                   // 0x0017273c: beqzl $v0, 0x172758
    v0 = 3;                                                     // 0x00172740: addiu $v0, $zero, 3
    if (a1 == t0) goto label_0x17276c;                          // 0x00172744: beq $a1, $t0, 0x17276c
    a3 = 1;                                                     // 0x00172748: addiu $a3, $zero, 1
    goto label_0x17276c;                                        // 0x0017274c: b 0x17276c
    a3 = 3;                                                     // 0x00172750: addiu $a3, $zero, 3
    /* nop */                                                   // 0x00172754: nop 
    if (a1 != v0) goto label_0x17276c;                          // 0x00172758: bne $a1, $v0, 0x17276c
    a3 = 3;                                                     // 0x0017275c: addiu $a3, $zero, 3
    func_001752e8();  // 1752e8                                // 0x00172760: jal 0x1752e8
    a1 = 0x19;                                                  // 0x00172764: addiu $a1, $zero, 0x19
label_0x17276c:
    a1 = 0x19;                                                  // 0x0017277c: addiu $a1, $zero, 0x19
    return func_00175170();  // Tail call                        // 0x00172780: j 0x175120
    sp = sp + 0x10;                                             // 0x00172784: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00172788: addiu $sp, $sp, -0x20
    v0 = 3;                                                     // 0x0017278c: addiu $v0, $zero, 3
    v1 = *(int32_t*)((s0) + 0x4c);                              // 0x001727a0: lw $v1, 0x4c($s0)
    if (v1 == v0) goto label_0x1727f0;                          // 0x001727a4: beq $v1, $v0, 0x1727f0
    s1 = *(int32_t*)((s0) + 0x48);                              // 0x001727a8: lw $s1, 0x48($s0)
    v0 = (v1 < 4) ? 1 : 0;                                      // 0x001727ac: slti $v0, $v1, 4
    if (v0 == 0) goto label_0x1727d0;                           // 0x001727b0: beqz $v0, 0x1727d0
    v0 = 4;                                                     // 0x001727b4: addiu $v0, $zero, 4
    v0 = 2;                                                     // 0x001727b8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1727e8;                          // 0x001727bc: beq $v1, $v0, 0x1727e8
    goto label_0x172818;                                        // 0x001727c4: b 0x172818
    /* nop */                                                   // 0x001727cc: nop 
label_0x1727d0:
    if (v1 == v0) goto label_0x1727f8;                          // 0x001727d0: beq $v1, $v0, 0x1727f8
    v0 = 6;                                                     // 0x001727d4: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1727f8;                          // 0x001727d8: beq $v1, $v0, 0x1727f8
    goto label_0x172818;                                        // 0x001727e0: b 0x172818
label_0x1727e8:
    goto label_0x172810;                                        // 0x001727e8: b 0x172810
    s1 = 2;                                                     // 0x001727ec: addiu $s1, $zero, 2
label_0x1727f0:
    goto label_0x172810;                                        // 0x001727f0: b 0x172810
    s1 = 3;                                                     // 0x001727f4: addiu $s1, $zero, 3
label_0x1727f8:
    func_001728a0();  // 1728a0                                // 0x001727f8: jal 0x1728a0
    if (v0 == 0) goto label_0x172810;                           // 0x00172800: beqz $v0, 0x172810
    func_001737c0();  // 1737c0                                // 0x00172808: jal 0x1737c0
    s1 = 4;                                                     // 0x0017280c: addiu $s1, $zero, 4
label_0x172810:
label_0x172818:
    return;                                                     // 0x00172820: jr $ra
    sp = sp + 0x20;                                             // 0x00172824: addiu $sp, $sp, 0x20
}