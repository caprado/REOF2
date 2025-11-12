void func_001702f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001702f0: addiu $sp, $sp, -0x20
    func_00169ba0();  // 0x169b88                                // 0x00170300: jal 0x169b88
    v0 = *(int32_t*)((s0) + 0x1b30);                            // 0x00170308: lw $v0, 0x1b30($s0)
    a0 = *(int32_t*)((v0) + 0x138);                             // 0x00170310: lw $a0, 0x138($v0)
    if (a0 <= 0) goto label_0x170368;                           // 0x00170314: blez $a0, 0x170368
    s0 = v0 + 0x13c;                                            // 0x00170318: addiu $s0, $v0, 0x13c
    goto label_0x170338;                                        // 0x0017031c: b 0x170338
    v0 = *(int32_t*)(s0);                                       // 0x00170320: lw $v0, 0($s0)
    /* nop */                                                   // 0x00170324: nop 
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x00170328: slt $v0, $v1, $a0
    if (v0 == 0) goto label_0x170368;                           // 0x0017032c: beqz $v0, 0x170368
    s0 = s0 + 0x80;                                             // 0x00170330: addiu $s0, $s0, 0x80
    v0 = *(int32_t*)(s0);                                       // 0x00170334: lw $v0, 0($s0)
label_0x170338:
    /* nop */                                                   // 0x00170338: nop 
    /* nop */                                                   // 0x0017033c: nop 
    /* nop */                                                   // 0x00170340: nop 
    /* bnezl $v0, 0x170328 */                                   // 0x00170344: bnezl $v0, 0x170328
    v1 = v1 + 1;                                                // 0x00170348: addiu $v1, $v1, 1
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0017034c: lw $v0, 4($s0)
    /* nop */                                                   // 0x00170350: nop 
    /* nop */                                                   // 0x00170354: nop 
    /* bnezl $v0, 0x170328 */                                   // 0x00170358: bnezl $v0, 0x170328
    v1 = v1 + 1;                                                // 0x0017035c: addiu $v1, $v1, 1
    v0 = 1;                                                     // 0x00170360: addiu $v0, $zero, 1
    *(uint32_t*)(s0) = v0;                                      // 0x00170364: sw $v0, 0($s0)
label_0x170368:
    v0 = v1 ^ a0;                                               // 0x00170368: xor $v0, $v1, $a0
    func_00169bc8();  // 0x169ba0                                // 0x00170370: jal 0x169ba0
    if (v0 == 0) s0 = 0;                                        // 0x00170374: movz $s0, $zero, $v0
    return;                                                     // 0x00170384: jr $ra
    sp = sp + 0x20;                                             // 0x00170388: addiu $sp, $sp, 0x20
}