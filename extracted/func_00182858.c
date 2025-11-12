void func_00182858() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x898;                                                 // 0x00182858: addiu $v0, $zero, 0x898
    v1 = 0x27 << 16;                                            // 0x0018285c: lui $v1, 0x27
    v1 = v1 + 0x72c8;                                           // 0x00182864: addiu $v1, $v1, 0x72c8
    t0 = -1;                                                    // 0x00182868: addiu $t0, $zero, -1
    t1 = 1;                                                     // 0x0018286c: addiu $t1, $zero, 1
    t2 = v1 + 0x808;                                            // 0x00182870: addiu $t2, $v1, 0x808
    t3 = 0x23 << 16;                                            // 0x00182874: lui $t3, 0x23
    a1 = v1 + a0;                                               // 0x00182878: addu $a1, $v1, $a0
    *(uint32_t*)((a1) + 0x800) = t0;                            // 0x0018287c: sw $t0, 0x800($a1)
    *(uint32_t*)((a2) + 0x804) = t0;                            // 0x00182884: sw $t0, 0x804($a2)
    g_0022a80c = 0;  // Global at 0x0022a80c                    // 0x0018288c: sw $zero, 0x894($a3)
    *(uint32_t*)((a1) + 0x888) = t1;                            // 0x00182894: sw $t1, 0x888($a1)
    a0 = a0 + t2;                                               // 0x00182898: addu $a0, $a0, $t2
    *(uint32_t*)((a2) + 0x88c) = 0;                             // 0x0018289c: sw $zero, 0x88c($a2)
    g_00277b58 = 0;  // Global at 0x00277b58                    // 0x001828a0: sw $zero, 0x890($v1)
    a3 = t3 + -0x6088;                                          // 0x001828a4: addiu $a3, $t3, -0x6088
    v1 = g_00229f78;  // Global at 0x00229f78                   // 0x001828a8: lb $v1, 0($a3)
    a1 = g_00229f79;  // Global at 0x00229f79                   // 0x001828ac: lb $a1, 1($a3)
    *(uint8_t*)(a0) = v1;                                       // 0x001828b0: sb $v1, 0($a0)
    *(uint8_t*)((a0) + 1) = a1;                                 // 0x001828b4: sb $a1, 1($a0)
    return;                                                     // 0x001828b8: jr $ra
    v0 = 1;                                                     // 0x001828bc: addiu $v0, $zero, 1
}