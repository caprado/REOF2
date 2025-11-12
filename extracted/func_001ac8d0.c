void func_001ac8d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a7590();  // Tail call                       // 0x001ac8d0: j 0x1a7590
    a0 = a0 & 0xff;                                             // 0x001ac8d4: andi $a0, $a0, 0xff
    /* nop */                                                   // 0x001ac8d8: nop 
    /* nop */                                                   // 0x001ac8dc: nop 
    sp = sp + -0x30;                                            // 0x001ac8e0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ac8e8: addu.qb $zero, $sp, $s1
    if (s0 != 0) goto label_0x1ac920;                           // 0x001ac8f4: bnez $s0, 0x1ac920
    func_001a77d0();  // 0x1a7610                                // 0x001ac8fc: jal 0x1a7610
    a0 = 1;                                                     // 0x001ac900: addiu $a0, $zero, 1
    if (v0 >= 0) goto label_0x1ac914;                           // 0x001ac904: bgez $v0, 0x1ac914
    /* nop */                                                   // 0x001ac908: nop 
    goto label_0x1ac96c;                                        // 0x001ac90c: b 0x1ac96c
    v0 = -1;                                                    // 0x001ac910: addiu $v0, $zero, -1
label_0x1ac914:
    v0 = 1;                                                     // 0x001ac914: addiu $v0, $zero, 1
    goto label_0x1ac948;                                        // 0x001ac918: b 0x1ac948
    *(uint32_t*)((gp) + -0x63dc) = v0;                          // 0x001ac91c: sw $v0, -0x63dc($gp)
label_0x1ac920:
    v0 = *(int32_t*)((gp) + -0x63dc);                           // 0x001ac920: lw $v0, -0x63dc($gp)
    if (v0 == 0) goto label_0x1ac94c;                           // 0x001ac924: beqz $v0, 0x1ac94c
    v0 = -1;                                                    // 0x001ac928: addiu $v0, $zero, -1
    func_001a77d0();  // 0x1a7610                                // 0x001ac92c: jal 0x1a7610
    if (v0 >= 0) goto label_0x1ac944;                           // 0x001ac934: bgez $v0, 0x1ac944
    /* nop */                                                   // 0x001ac938: nop 
    goto label_0x1ac96c;                                        // 0x001ac93c: b 0x1ac96c
    v0 = -1;                                                    // 0x001ac940: addiu $v0, $zero, -1
label_0x1ac944:
    *(uint32_t*)((gp) + -0x63dc) = 0;                           // 0x001ac944: sw $zero, -0x63dc($gp)
label_0x1ac948:
    v0 = -1;                                                    // 0x001ac948: addiu $v0, $zero, -1
label_0x1ac94c:
    if (s1 != v0) goto label_0x1ac964;                          // 0x001ac94c: bne $s1, $v0, 0x1ac964
    a0 = s1 & 0xff;                                             // 0x001ac950: andi $a0, $s1, 0xff
    func_001a7210();  // 0x1a7190                                // 0x001ac954: jal 0x1a7190
    a0 = s0 & 0xffff;                                           // 0x001ac958: andi $a0, $s0, 0xffff
    goto label_0x1ac96c;                                        // 0x001ac95c: b 0x1ac96c
    /* nop */                                                   // 0x001ac960: nop 
label_0x1ac964:
    func_001a72a0();  // 0x1a7210                                // 0x001ac964: jal 0x1a7210
    a1 = s0 & 0xffff;                                           // 0x001ac968: andi $a1, $s0, 0xffff
label_0x1ac96c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ac970: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ac974: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ac978: jr $ra
    sp = sp + 0x30;                                             // 0x001ac97c: addiu $sp, $sp, 0x30
}