void func_00148330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 0x860) = 0;                             // 0x00148330: sw $zero, 0x860($a0)
    return func_00143c70();  // Tail call                        // 0x00148334: j 0x143c48
    a0 = 1;                                                     // 0x00148338: addiu $a0, $zero, 1
    /* nop */                                                   // 0x0014833c: nop 
    sp = sp + -0x20;                                            // 0x00148340: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0x138);                             // 0x00148350: lw $v0, 0x138($s0)
    if (v0 == 0) goto label_0x148370;                           // 0x00148354: beqz $v0, 0x148370
    a2 = *(int32_t*)((s0) + 0x130);                             // 0x00148358: lw $a2, 0x130($s0)
    a1 = 0x22 << 16;                                            // 0x0014835c: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x00148360: jal 0x148530
    a1 = &str_00226998;  // "[MPEG ERROR]%s\n"                  // 0x00148364: addiu $a1, $a1, 0x6998
    goto label_0x1483ac;                                        // 0x00148368: b 0x1483ac
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x0014836c: sw $zero, 0x138($s0)
label_0x148370:
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x00148370: lw $v1, 0x18c($s0)
    v0 = 3;                                                     // 0x00148374: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x148398;                          // 0x00148378: bne $v1, $v0, 0x148398
    a3 = a2 + -1;                                               // 0x0014837c: addiu $a3, $a2, -1
    a1 = *(int32_t*)((s0) + 0x1d4);                             // 0x00148380: lw $a1, 0x1d4($s0)
    a2 = a2 + -1;                                               // 0x00148384: addiu $a2, $a2, -1
    func_00146a98();  // 146a98                                // 0x00148388: jal 0x146a98
    goto label_0x1483ac;                                        // 0x00148390: b 0x1483ac
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x00148394: sw $zero, 0x138($s0)
label_0x148398:
    a1 = *(int32_t*)((s0) + 0x1e4);                             // 0x00148398: lw $a1, 0x1e4($s0)
    a2 = *(int32_t*)((s0) + 0x1f4);                             // 0x0014839c: lw $a2, 0x1f4($s0)
    func_00146ba8();  // 146ba8                                // 0x001483a0: jal 0x146ba8
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x001483a8: sw $zero, 0x138($s0)
label_0x1483ac:
    return;                                                     // 0x001483b4: jr $ra
    sp = sp + 0x20;                                             // 0x001483b8: addiu $sp, $sp, 0x20
}