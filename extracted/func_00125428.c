void func_00125428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00125428: addiu $sp, $sp, -0x10
    v1 = *(int16_t*)((a0) + 0x98);                              // 0x00125430: lh $v1, 0x98($a0)
    if (v1 != 0) goto label_0x125448;                           // 0x00125434: bnez $v1, 0x125448
    v0 = 0xa;                                                   // 0x00125438: addiu $v0, $zero, 0xa
    return func_00125428();  // Tail call                        // 0x00125440: j 0x125358
    sp = sp + 0x10;                                             // 0x00125444: addiu $sp, $sp, 0x10
label_0x125448:
    if (v1 != v0) goto label_0x125460;                          // 0x00125448: bnel $v1, $v0, 0x125460
    v0 = 2;                                                     // 0x0012544c: addiu $v0, $zero, 2
    return func_00122d70();  // Tail call                        // 0x00125454: j 0x122d48
    sp = sp + 0x10;                                             // 0x00125458: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012545c: nop 
label_0x125460:
    if (v1 != v0) goto label_0x125478;                          // 0x00125460: bnel $v1, $v0, 0x125478
    v0 = 3;                                                     // 0x00125464: addiu $v0, $zero, 3
    return func_001258c8();  // Tail call                        // 0x0012546c: j 0x125750
    sp = sp + 0x10;                                             // 0x00125470: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00125474: nop 
label_0x125478:
    if (v1 != v0) goto label_0x125490;                          // 0x00125478: bnel $v1, $v0, 0x125490
    v0 = 4;                                                     // 0x0012547c: addiu $v0, $zero, 4
    return func_00123700();  // Tail call                        // 0x00125484: j 0x1236d8
    sp = sp + 0x10;                                             // 0x00125488: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012548c: nop 
label_0x125490:
    if (v1 != v0) goto label_0x1254a8;                          // 0x00125490: bnel $v1, $v0, 0x1254a8
    v0 = 1;                                                     // 0x00125494: addiu $v0, $zero, 1
    return func_001241a0();  // Tail call                        // 0x0012549c: j 0x124140
    sp = sp + 0x10;                                             // 0x001254a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001254a4: nop 
label_0x1254a8:
    if (v1 != v0) goto label_0x1254c0;                          // 0x001254a8: bnel $v1, $v0, 0x1254c0
    v0 = 0xf;                                                   // 0x001254ac: addiu $v0, $zero, 0xf
    return func_00126190();  // Tail call                        // 0x001254b4: j 0x126138
    sp = sp + 0x10;                                             // 0x001254b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001254bc: nop 
label_0x1254c0:
    if (v1 != v0) goto label_0x1254d0;                          // 0x001254c0: bne $v1, $v0, 0x1254d0
    return func_00122c60();  // Tail call                        // 0x001254c8: j 0x122b80
    sp = sp + 0x10;                                             // 0x001254cc: addiu $sp, $sp, 0x10
label_0x1254d0:
    return;                                                     // 0x001254d0: jr $ra
    sp = sp + 0x10;                                             // 0x001254d4: addiu $sp, $sp, 0x10
}