void func_0013f2e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013f2e8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f304: lw $v0, 4($s1)
    if (v0 <= 0) goto label_0x13f3c8;                           // 0x0013f308: blez $v0, 0x13f3c8
    v0 = *(int32_t*)(s1);                                       // 0x0013f310: lw $v0, 0($s1)
    /* beqzl $v0, 0x13f3cc */                                   // 0x0013f314: beqzl $v0, 0x13f3cc
    func_0013ef30();  // 0x13ef18                                // 0x0013f31c: jal 0x13ef18
    /* nop */                                                   // 0x0013f320: nop 
    if (s2 == 0) goto label_0x13f378;                           // 0x0013f324: beqz $s2, 0x13f378
    v0 = 1;                                                     // 0x0013f328: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x13f398;                          // 0x0013f32c: bnel $s2, $v0, 0x13f398
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f330: lw $v0, 0x1c($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f334: lw $v0, 4($s1)
    a0 = *(int32_t*)((s0) + 0x10);                              // 0x0013f338: lw $a0, 0x10($s0)
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x0013f33c: lw $a1, 0xc($s0)
    a0 = a0 - v0;                                               // 0x0013f340: subu $a0, $a0, $v0
    a3 = *(int32_t*)((s0) + 0x18);                              // 0x0013f344: lw $a3, 0x18($s0)
    v0 = (a0 < 0) ? 1 : 0;                                      // 0x0013f348: slti $v0, $a0, 0
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0013f34c: lw $v1, 0x14($s0)
    if (v0 != 0) a0 = 0;                                        // 0x0013f350: movn $a0, $zero, $v0
    a2 = *(int32_t*)(s1);                                       // 0x0013f354: lw $a2, 0($s1)
    *(uint32_t*)((s0) + 0x10) = a0;                             // 0x0013f358: sw $a0, 0x10($s0)
    a2 = a2 - v1;                                               // 0x0013f35c: subu $a2, $a2, $v1
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0013f360: lw $v0, 4($s1)
    a1 = a1 + v0;                                               // 0x0013f364: addu $a1, $a1, $v0
    v1 = (a3 < a1) ? 1 : 0;                                     // 0x0013f368: slt $v1, $a3, $a1
    if (v1 != 0) a1 = a3;                                       // 0x0013f36c: movn $a1, $a3, $v1
    if (a0 == a2) goto label_0x13f3b0;                          // 0x0013f370: beq $a0, $a2, 0x13f3b0
    *(uint32_t*)((s0) + 0xc) = a1;                              // 0x0013f374: sw $a1, 0xc($s0)
label_0x13f378:
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f378: lw $v0, 0x1c($s0)
    /* beqzl $v0, 0x13f3b4 */                                   // 0x0013f37c: beqzl $v0, 0x13f3b4
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f384: lw $a0, 0x20($s0)
    /* call function at address in v0 */                        // 0x0013f388: jalr $v0
    a1 = -3;                                                    // 0x0013f38c: addiu $a1, $zero, -3
    goto label_0x13f3b4;                                        // 0x0013f390: b 0x13f3b4
label_0x13f398:
    *(uint32_t*)(s1) = 0;                                       // 0x0013f398: sw $zero, 0($s1)
    if (v0 == 0) goto label_0x13f3b0;                           // 0x0013f39c: beqz $v0, 0x13f3b0
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0013f3a0: sw $zero, 4($s1)
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f3a4: lw $a0, 0x20($s0)
    /* call function at address in v0 */                        // 0x0013f3a8: jalr $v0
    a1 = -3;                                                    // 0x0013f3ac: addiu $a1, $zero, -3
label_0x13f3b0:
label_0x13f3b4:
    return func_0013ef80();  // Tail call                        // 0x0013f3c0: j 0x13ef30
    sp = sp + 0x20;                                             // 0x0013f3c4: addiu $sp, $sp, 0x20
label_0x13f3c8:
    return;                                                     // 0x0013f3d8: jr $ra
    sp = sp + 0x20;                                             // 0x0013f3dc: addiu $sp, $sp, 0x20
}