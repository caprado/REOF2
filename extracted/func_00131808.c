void func_00131808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00131808: addiu $sp, $sp, -0x10
    return func_001317a8();  // Tail call                       // 0x00131814: j 0x1317a8
    sp = sp + 0x10;                                             // 0x00131818: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013181c: nop 
    sp = sp + -0x30;                                            // 0x00131820: addiu $sp, $sp, -0x30
    v0 = *(int8_t*)((s0) + 3);                                  // 0x00131840: lb $v0, 3($s0)
    if (v0 <= 0) goto label_0x13187c;                           // 0x00131844: blez $v0, 0x13187c
    s1 = s0 + 0x18;                                             // 0x0013184c: addiu $s1, $s0, 0x18
    a0 = *(int32_t*)(s1);                                       // 0x00131850: lw $a0, 0($s1)
    /* nop */                                                   // 0x00131854: nop 
    s1 = s1 + 4;                                                // 0x00131858: addiu $s1, $s1, 4
    v0 = *(int32_t*)(a0);                                       // 0x0013185c: lw $v0, 0($a0)
    v1 = g_7fff0014;  // Global at 0x7fff0014                   // 0x00131860: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x00131864: jalr $v1
    s2 = s2 + 1;                                                // 0x00131868: addiu $s2, $s2, 1
    v0 = *(int8_t*)((s0) + 3);                                  // 0x0013186c: lb $v0, 3($s0)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x00131870: slt $v0, $s2, $v0
    /* bnezl $v0, 0x131858 */                                   // 0x00131874: bnezl $v0, 0x131858
    a0 = *(int32_t*)(s1);                                       // 0x00131878: lw $a0, 0($s1)
label_0x13187c:
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0013187c: lw $a0, 4($s0)
    func_0012c8d0();  // 0x12c880                                // 0x00131880: jal 0x12c880
    *(uint32_t*)((s0) + 0x14) = s3;                             // 0x00131888: sw $s3, 0x14($s0)
    func_0012c970();  // 0x12c940                                // 0x0013188c: jal 0x12c940
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131890: lw $a0, 4($s0)
    v1 = 1;                                                     // 0x00131894: addiu $v1, $zero, 1
    v0 = 0x7fff << 16;                                          // 0x00131898: lui $v0, 0x7fff
    a0 = -1;                                                    // 0x0013189c: addiu $a0, $zero, -1
    v0 = v0 | 0xffff;                                           // 0x001318a0: ori $v0, $v0, 0xffff
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001318a4: sb $v1, 1($s0)
    *(uint32_t*)((s0) + 0x90) = a0;                             // 0x001318a8: sw $a0, 0x90($s0)
    v1 = 0x1f << 16;                                            // 0x001318ac: lui $v1, 0x1f
    *(uint32_t*)((s0) + 0x8c) = v0;                             // 0x001318b0: sw $v0, 0x8c($s0)
    *(uint32_t*)((s0) + 0x4c) = 0;                              // 0x001318b4: sw $zero, 0x4c($s0)
    *(uint8_t*)((s0) + 0x71) = 0;                               // 0x001318b8: sb $zero, 0x71($s0)
    *(uint32_t*)((s0) + 0x9c) = 0;                              // 0x001318bc: sw $zero, 0x9c($s0)
    *(uint32_t*)((s0) + 0xa4) = 0;                              // 0x001318c0: sw $zero, 0xa4($s0)
    a0 = *(int32_t*)((s0) + 0x74);                              // 0x001318c4: lw $a0, 0x74($s0)
    v0 = g_001f59c4;  // Global at 0x001f59c4                   // 0x001318c8: lw $v0, 0x59c4($v1)
    if (a0 == 0) goto label_0x1318f0;                           // 0x001318cc: beqz $a0, 0x1318f0
    *(uint32_t*)((s0) + 0xa0) = v0;                             // 0x001318d0: sw $v0, 0xa0($s0)
    return func_001227a8();  // Tail call                        // 0x001318e8: j 0x122608
    sp = sp + 0x30;                                             // 0x001318ec: addiu $sp, $sp, 0x30
label_0x1318f0:
    return;                                                     // 0x00131904: jr $ra
    sp = sp + 0x30;                                             // 0x00131908: addiu $sp, $sp, 0x30
}