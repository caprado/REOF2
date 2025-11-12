void func_001b8e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b8e30: addiu $sp, $sp, -0x10
    a1 = 0x22 << 16;                                            // 0x001b8e34: lui $a1, 0x22
    v0 = 0x39 << 16;                                            // 0x001b8e38: lui $v0, 0x39
    a3 = 0x39 << 16;                                            // 0x001b8e3c: lui $a3, 0x39
    a2 = 1;                                                     // 0x001b8e48: addiu $a2, $zero, 1
    a1 = a1 + -0x3660;                                          // 0x001b8e4c: addiu $a1, $a1, -0x3660
    v0 = v0 + 0x4fe0;                                           // 0x001b8e50: addiu $v0, $v0, 0x4fe0
    goto label_0x1b8f38;                                        // 0x001b8e54: b 0x1b8f38
    a3 = a3 + 0x5890;                                           // 0x001b8e58: addiu $a3, $a3, 0x5890
label_0x1b8e5c:
    a0 = v1 << 3;                                               // 0x001b8e5c: sll $a0, $v1, 3
    t0 = t0 - v1;                                               // 0x001b8e60: subu $t0, $t0, $v1
    a0 = a0 - v1;                                               // 0x001b8e64: subu $a0, $a0, $v1
    t0 = t0 << 2;                                               // 0x001b8e68: sll $t0, $t0, 2
    a0 = a0 << 2;                                               // 0x001b8e6c: sll $a0, $a0, 2
    t1 = v0 + t0;                                               // 0x001b8e70: addu $t1, $v0, $t0
    a0 = a3 + a0;                                               // 0x001b8e74: addu $a0, $a3, $a0
    *(uint8_t*)(t1) = 0;                                        // 0x001b8e78: sb $zero, 0($t1)
    t0 = a0 + 0xd00;                                            // 0x001b8e7c: addiu $t0, $a0, 0xd00
    *(uint8_t*)((t1) + 7) = 0;                                  // 0x001b8e80: sb $zero, 7($t1)
    *(uint8_t*)((t1) + 6) = 0;                                  // 0x001b8e84: sb $zero, 6($t1)
    *(uint8_t*)((t1) + 5) = 0;                                  // 0x001b8e88: sb $zero, 5($t1)
    *(uint8_t*)((t1) + 4) = 0;                                  // 0x001b8e8c: sb $zero, 4($t1)
    a0 = *(uint16_t*)((a0) + 0xd02);                            // 0x001b8e90: lhu $a0, 0xd02($a0)
    a0 = a0 & 0x8000;                                           // 0x001b8e94: andi $a0, $a0, 0x8000
    if (a0 != 0) goto label_0x1b8f34;                           // 0x001b8e98: bnez $a0, 0x1b8f34
    /* nop */                                                   // 0x001b8e9c: nop 
    a0 = *(uint8_t*)(t0);                                       // 0x001b8ea0: lbu $a0, 0($t0)
    if (a0 == 0) goto label_0x1b8f34;                           // 0x001b8ea4: beqz $a0, 0x1b8f34
    /* nop */                                                   // 0x001b8ea8: nop 
    *(uint8_t*)(t1) = a2;                                       // 0x001b8eac: sb $a2, 0($t1)
    a0 = *(uint16_t*)((t0) + 2);                                // 0x001b8eb0: lhu $a0, 2($t0)
    a0 = a0 & 0x8000;                                           // 0x001b8eb4: andi $a0, $a0, 0x8000
    a0 = ((unsigned)0 < (unsigned)a0) ? 1 : 0;                  // 0x001b8eb8: sltu $a0, $zero, $a0
    *(uint8_t*)((t1) + 1) = a0;                                 // 0x001b8ebc: sb $a0, 1($t1)
    a0 = *(uint16_t*)((t0) + 2);                                // 0x001b8ec0: lhu $a0, 2($t0)
    *(uint8_t*)((t1) + 2) = a0;                                 // 0x001b8ec4: sb $a0, 2($t1)
    a0 = *(uint16_t*)((t0) + 4);                                // 0x001b8ec8: lhu $a0, 4($t0)
    a0 = a0 & 0xf;                                              // 0x001b8ecc: andi $a0, $a0, 0xf
    *(uint8_t*)((t1) + 3) = a0;                                 // 0x001b8ed0: sb $a0, 3($t1)
    *(uint32_t*)((t1) + 0x24) = t0;                             // 0x001b8ed4: sw $t0, 0x24($t1)
    a0 = *(int8_t*)((t1) + 3);                                  // 0x001b8ed8: lb $a0, 3($t1)
    a0 = a0 << 2;                                               // 0x001b8edc: sll $a0, $a0, 2
    a0 = a1 + a0;                                               // 0x001b8ee0: addu $a0, $a1, $a0
    a0 = *(int32_t*)(a0);                                       // 0x001b8ee4: lw $a0, 0($a0)
    *(uint32_t*)((t1) + 0x28) = a0;                             // 0x001b8ee8: sw $a0, 0x28($t1)
    a0 = *(uint8_t*)((t0) + 1);                                 // 0x001b8eec: lbu $a0, 1($t0)
    *(uint16_t*)((t1) + 0x38) = a0;                             // 0x001b8ef0: sh $a0, 0x38($t1)
    FPU_F2 = *(float*)((t0) + 8);  // Load float                // 0x001b8ef4: lwc1 $f2, 8($t0)
    FPU_F1 = *(float*)((t0) + 0xc);  // Load float              // 0x001b8ef8: lwc1 $f1, 0xc($t0)
    FPU_F0 = *(float*)((t0) + 0x10);  // Load float             // 0x001b8efc: lwc1 $f0, 0x10($t0)
    *(float*)((t1) + 0x2c) = FPU_F2;  // Store float            // 0x001b8f00: swc1 $f2, 0x2c($t1)
    *(float*)((t1) + 0x30) = FPU_F1;  // Store float            // 0x001b8f04: swc1 $f1, 0x30($t1)
    *(float*)((t1) + 0x34) = FPU_F0;  // Store float            // 0x001b8f08: swc1 $f0, 0x34($t1)
    a0 = *(int32_t*)((t1) + 0x28);                              // 0x001b8f0c: lw $a0, 0x28($t1)
    if (a0 != 0) goto label_0x1b8f34;                           // 0x001b8f10: bnez $a0, 0x1b8f34
    /* nop */                                                   // 0x001b8f14: nop 
label_0x1b8f18:
    /* nop */                                                   // 0x001b8f18: nop 
    /* nop */                                                   // 0x001b8f1c: nop 
    /* nop */                                                   // 0x001b8f20: nop 
    /* nop */                                                   // 0x001b8f24: nop 
    /* nop */                                                   // 0x001b8f28: nop 
    goto label_0x1b8f18;                                        // 0x001b8f2c: b 0x1b8f18
    /* nop */                                                   // 0x001b8f30: nop 
label_0x1b8f34:
    v1 = v1 + 1;                                                // 0x001b8f34: addiu $v1, $v1, 1
label_0x1b8f38:
    a0 = (v1 < 4) ? 1 : 0;                                      // 0x001b8f38: slti $a0, $v1, 4
    if (a0 != 0) goto label_0x1b8e5c;                           // 0x001b8f3c: bnez $a0, 0x1b8e5c
    t0 = v1 << 4;                                               // 0x001b8f40: sll $t0, $v1, 4
    at = 0x39 << 16;                                            // 0x001b8f44: lui $at, 0x39
    a2 = g_00396604;  // Global at 0x00396604                   // 0x001b8f48: lw $a2, 0x6604($at)
    if (a2 != 0) goto label_0x1b8f58;                           // 0x001b8f4c: bnez $a2, 0x1b8f58
    at = 0x39 << 16;                                            // 0x001b8f50: lui $at, 0x39
    a2 = 0x300;                                                 // 0x001b8f54: addiu $a2, $zero, 0x300
label_0x1b8f58:
    a0 = 1;                                                     // 0x001b8f58: addiu $a0, $zero, 1
    a3 = g_00396603;  // Global at 0x00396603                   // 0x001b8f5c: lbu $a3, 0x6603($at)
    at = 0x39 << 16;                                            // 0x001b8f60: lui $at, 0x39
    t0 = g_00396608;  // Global at 0x00396608                   // 0x001b8f64: lbu $t0, 0x6608($at)
    thunk_func_001ad1b0();  // 0x1ac9a0                          // 0x001b8f68: jal 0x1ac9a0
    a1 = 4;                                                     // 0x001b8f6c: addiu $a1, $zero, 4
    return;                                                     // 0x001b8f78: jr $ra
    sp = sp + 0x10;                                             // 0x001b8f7c: addiu $sp, $sp, 0x10
}