void func_001c1238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c1238: addiu $sp, $sp, -0x20
    func_001c1238();  // 0x1c1218                                // 0x001c1248: jal 0x1c1218
    a0 = *(uint8_t*)((s0) + 7);                                 // 0x001c124c: lbu $a0, 7($s0)
    a0 = *(uint8_t*)((s0) + 6);                                 // 0x001c1250: lbu $a0, 6($s0)
    func_001c1238();  // 0x1c1218                                // 0x001c1254: jal 0x1c1218
    *(uint8_t*)((s0) + 7) = v0;                                 // 0x001c1258: sb $v0, 7($s0)
    a0 = *(uint8_t*)((s0) + 5);                                 // 0x001c125c: lbu $a0, 5($s0)
    func_001c1238();  // 0x1c1218                                // 0x001c1260: jal 0x1c1218
    *(uint8_t*)((s0) + 6) = v0;                                 // 0x001c1264: sb $v0, 6($s0)
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x001c1268: lbu $a0, 3($s0)
    func_001c1238();  // 0x1c1218                                // 0x001c126c: jal 0x1c1218
    *(uint8_t*)((s0) + 5) = v0;                                 // 0x001c1270: sb $v0, 5($s0)
    a0 = *(uint8_t*)((s0) + 2);                                 // 0x001c1274: lbu $a0, 2($s0)
    func_001c1238();  // 0x1c1218                                // 0x001c1278: jal 0x1c1218
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001c127c: sb $v0, 3($s0)
    a0 = *(uint8_t*)((s0) + 1);                                 // 0x001c1280: lbu $a0, 1($s0)
    func_001c1238();  // 0x1c1218                                // 0x001c1284: jal 0x1c1218
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c1288: sb $v0, 2($s0)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001c128c: sb $v0, 1($s0)
    return;                                                     // 0x001c1298: jr $ra
    sp = sp + 0x20;                                             // 0x001c129c: addiu $sp, $sp, 0x20
}