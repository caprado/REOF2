void func_0017d4e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x10;                                            // 0x0017d4e8: addiu $sp, $sp, -0x10
    v0 = a0 + 8;                                                // 0x0017d4ec: addiu $v0, $a0, 8
    v1 = 1;                                                     // 0x0017d4f4: addiu $v1, $zero, 1
    *(uint32_t*)((v0) + 8) = a2;                                // 0x0017d4f8: sw $a2, 8($v0)
    *(uint32_t*)(v0) = v1;                                      // 0x0017d500: sw $v1, 0($v0)
    *(uint32_t*)((v0) + 4) = a1;                                // 0x0017d504: sw $a1, 4($v0)
    goto label_0x17d510;                                        // 0x0017d508: j 0x17d510
    sp = sp + 0x10;                                             // 0x0017d50c: addiu $sp, $sp, 0x10
label_0x17d510:
    sp = sp + -0x50;                                            // 0x0017d510: addiu $sp, $sp, -0x50
    s3 = v0 + 0x18;                                             // 0x0017d51c: addiu $s3, $v0, 0x18
    s4 = v0 + 0x28;                                             // 0x0017d524: addiu $s4, $v0, 0x28
    v1 = v0 + 8;                                                // 0x0017d52c: addiu $v1, $v0, 8
    t0 = *(int32_t*)((v1) + 4);                                 // 0x0017d53c: lw $t0, 4($v1)
    if (t0 != 0) goto label_0x17d568;                           // 0x0017d540: bnez $t0, 0x17d568
    v0 = 1;                                                     // 0x0017d548: addiu $v0, $zero, 1
    *(uint32_t*)((s3) + 8) = 0;                                 // 0x0017d54c: sw $zero, 8($s3)
    *(uint32_t*)(s3) = v0;                                      // 0x0017d550: sw $v0, 0($s3)
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x0017d554: sw $zero, 4($s3)
    *(uint32_t*)(s4) = v0;                                      // 0x0017d558: sw $v0, 0($s4)
    *(uint32_t*)((s4) + 8) = 0;                                 // 0x0017d55c: sw $zero, 8($s4)
    goto label_0x17d5d8;                                        // 0x0017d560: b 0x17d5d8
    *(uint32_t*)((s4) + 4) = 0;                                 // 0x0017d564: sw $zero, 4($s4)
label_0x17d568:
    s0 = 0x23 << 16;                                            // 0x0017d568: lui $s0, 0x23
    s2 = sp + 0x10;                                             // 0x0017d56c: addiu $s2, $sp, 0x10
    v0 = *(int32_t*)((v1) + 8);                                 // 0x0017d570: lw $v0, 8($v1)
    s0 = &str_00229cd0;  // "ZMVFRM"                            // 0x0017d574: addiu $s0, $s0, -0x6330
    a1 = 0x23 << 16;                                            // 0x0017d578: lui $a1, 0x23
    a1 = &str_00229cc8;  // "SFXINFE"                           // 0x0017d580: addiu $a1, $a1, -0x6338
    local_0 = t0;                                               // 0x0017d588: sw $t0, 0($sp)
    s1 = 1;                                                     // 0x0017d58c: addiu $s1, $zero, 1
    func_001406e0();  // 1406e0                                // 0x0017d590: jal 0x1406e0
    local_4 = v0;                                               // 0x0017d594: sw $v0, 4($sp)
    v1 = local_10;                                              // 0x0017d598: lw $v1, 0x10($sp)
    a1 = 0x23 << 16;                                            // 0x0017d59c: lui $a1, 0x23
    v0 = local_14;                                              // 0x0017d5a0: lw $v0, 0x14($sp)
    a1 = &str_00229cd8;  // "ZMFSIZE"                           // 0x0017d5a4: addiu $a1, $a1, -0x6328
    *(uint32_t*)((s3) + 4) = v1;                                // 0x0017d5a8: sw $v1, 4($s3)
    *(uint32_t*)((s3) + 8) = v0;                                // 0x0017d5b0: sw $v0, 8($s3)
    *(uint32_t*)(s3) = s1;                                      // 0x0017d5b8: sw $s1, 0($s3)
    func_001406e0();  // 1406e0                                // 0x0017d5bc: jal 0x1406e0
    *(uint32_t*)(s4) = s1;                                      // 0x0017d5c4: sw $s1, 0($s4)
    v0 = local_10;                                              // 0x0017d5c8: lw $v0, 0x10($sp)
    v1 = local_14;                                              // 0x0017d5cc: lw $v1, 0x14($sp)
    *(uint32_t*)((s4) + 4) = v0;                                // 0x0017d5d0: sw $v0, 4($s4)
    *(uint32_t*)((s4) + 8) = v1;                                // 0x0017d5d4: sw $v1, 8($s4)
label_0x17d5d8:
    return;                                                     // 0x0017d5f0: jr $ra
    sp = sp + 0x50;                                             // 0x0017d5f4: addiu $sp, $sp, 0x50
}