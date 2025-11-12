void func_00169408() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00169408: addiu $sp, $sp, -0x50
    v0 = 0x18 << 16;                                            // 0x0016940c: lui $v0, 0x18
    a2 = v0 + -0x63d8;                                          // 0x00169418: addiu $a2, $v0, -0x63d8
    s3 = s0 + 8;                                                // 0x0016942c: addiu $s3, $s0, 8
    s4 = s0 + 0xc;                                              // 0x00169434: addiu $s4, $s0, 0xc
    s5 = s2 & 0xff;                                             // 0x0016943c: andi $s5, $s2, 0xff
    func_00169610();  // 0x1695d8                                // 0x00169444: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x0016944c: lui $a2, 0x18
    *(uint32_t*)(s0) = v0;                                      // 0x00169450: sw $v0, 0($s0)
    a2 = a2 + -0x6370;                                          // 0x00169454: addiu $a2, $a2, -0x6370
    func_00169610();  // 0x1695d8                                // 0x0016945c: jal 0x1695d8
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00169468: sw $v0, 4($s0)
    func_00179da8();  // 0x179d00                                // 0x00169474: jal 0x179d00
    a2 = 0x18 << 16;                                            // 0x0016947c: lui $a2, 0x18
    a2 = a2 + -0x6258;                                          // 0x00169480: addiu $a2, $a2, -0x6258
    if (v0 != 0) goto label_0x16949c;                           // 0x0016948c: bnez $v0, 0x16949c
    v1 = -1;                                                    // 0x00169490: addiu $v1, $zero, -1
    *(uint32_t*)(s3) = v1;                                      // 0x00169494: sw $v1, 0($s3)
    *(uint32_t*)(s4) = v1;                                      // 0x00169498: sw $v1, 0($s4)
label_0x16949c:
    func_00169610();  // 0x1695d8                                // 0x0016949c: jal 0x1695d8
    /* nop */                                                   // 0x001694a0: nop 
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001694a8: sw $v0, 0x10($s0)
    func_001791f8();  // 0x179128                                // 0x001694b0: jal 0x179128
    a2 = 0x18 << 16;                                            // 0x001694b8: lui $a2, 0x18
    v1 = local_0;                                               // 0x001694bc: lw $v1, 0($sp)
    a2 = a2 + -0x61e8;                                          // 0x001694c0: addiu $a2, $a2, -0x61e8
    if (v0 == 0) v1 = 0;                                        // 0x001694cc: movz $v1, $zero, $v0
    v0 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x001694d0: sltu $v0, $zero, $v1
    local_0 = v1;                                               // 0x001694d4: sw $v1, 0($sp)
    if (v1 == 0) goto label_0x16957c;                           // 0x001694d8: beqz $v1, 0x16957c
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x001694dc: sw $v0, 0x14($s0)
    func_00169610();  // 0x1695d8                                // 0x001694e0: jal 0x1695d8
    /* nop */                                                   // 0x001694e4: nop 
    a2 = 0x18 << 16;                                            // 0x001694e8: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x001694ec: sw $v0, 0x18($s0)
    a2 = a2 + -0x6180;                                          // 0x001694f0: addiu $a2, $a2, -0x6180
    func_00169610();  // 0x1695d8                                // 0x001694f8: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x00169500: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00169504: sw $v0, 0x1c($s0)
    a2 = a2 + -0x6118;                                          // 0x00169508: addiu $a2, $a2, -0x6118
    func_00169610();  // 0x1695d8                                // 0x00169510: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x00169518: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0016951c: sw $v0, 0x20($s0)
    a2 = a2 + -0x60a8;                                          // 0x00169520: addiu $a2, $a2, -0x60a8
    func_00169610();  // 0x1695d8                                // 0x00169528: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x00169530: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x00169534: sw $v0, 0x24($s0)
    a2 = a2 + -0x6038;                                          // 0x00169538: addiu $a2, $a2, -0x6038
    func_00169610();  // 0x1695d8                                // 0x00169540: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x00169548: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x28) = v0;                             // 0x0016954c: sw $v0, 0x28($s0)
    a2 = a2 + -0x5fd0;                                          // 0x00169550: addiu $a2, $a2, -0x5fd0
    func_00169610();  // 0x1695d8                                // 0x00169558: jal 0x1695d8
    a2 = 0x18 << 16;                                            // 0x00169560: lui $a2, 0x18
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x00169564: sw $v0, 0x2c($s0)
    func_00169610();  // 0x1695d8                                // 0x00169570: jal 0x1695d8
    a2 = a2 + -0x5f58;                                          // 0x00169574: addiu $a2, $a2, -0x5f58
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x00169578: sw $v0, 0x30($s0)
label_0x16957c:
    return;                                                     // 0x00169598: jr $ra
    sp = sp + 0x50;                                             // 0x0016959c: addiu $sp, $sp, 0x50
}