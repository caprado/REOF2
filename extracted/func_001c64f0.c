void func_001c64f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c64f0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c64f8: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c6500: lw $s0, -0x62dc($gp)
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x001c6504: lw $v1, 0x30($s0)
    if (v1 == 0) goto label_0x1c65d4;                           // 0x001c6508: beqz $v1, 0x1c65d4
    a0 = 1;                                                     // 0x001c650c: addiu $a0, $zero, 1
    func_001c19e0();  // 0x1c1980                                // 0x001c6510: jal 0x1c1980
    /* nop */                                                   // 0x001c6514: nop 
    func_001b4ff0();  // 0x1b4fd0                                // 0x001c651c: jal 0x1b4fd0
    a0 = 0x14;                                                  // 0x001c6520: addiu $a0, $zero, 0x14
    at = 0x31 << 16;                                            // 0x001c6524: lui $at, 0x31
    v0 = 2;                                                     // 0x001c6528: addiu $v0, $zero, 2
    v1 = g_003137a3;  // Global at 0x003137a3                   // 0x001c652c: lbu $v1, 0x37a3($at)
    if (v1 != v0) goto label_0x1c654c;                          // 0x001c6530: bne $v1, $v0, 0x1c654c
    a0 = 0x24 << 16;                                            // 0x001c6534: lui $a0, 0x24
    a0 = 0x24 << 16;                                            // 0x001c6538: lui $a0, 0x24
    func_001b52d0();  // 0x1b5090                                // 0x001c653c: jal 0x1b5090
    a0 = a0 + 0x3830;                                           // 0x001c6540: addiu $a0, $a0, 0x3830
    goto label_0x1c6558;                                        // 0x001c6544: b 0x1c6558
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c6548: lw $v0, 0x38($s0)
label_0x1c654c:
    func_001b52d0();  // 0x1b5090                                // 0x001c654c: jal 0x1b5090
    a0 = a0 + 0x3838;                                           // 0x001c6550: addiu $a0, $a0, 0x3838
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c6554: lw $v0, 0x38($s0)
label_0x1c6558:
    if (v0 != 0) goto label_0x1c6574;                           // 0x001c6558: bnez $v0, 0x1c6574
    v0 = 0x8080 << 16;                                          // 0x001c655c: lui $v0, 0x8080
    v0 = 0x8000 << 16;                                          // 0x001c6560: lui $v0, 0x8000
    func_001b5060();  // 0x1b5050                                // 0x001c6564: jal 0x1b5050
    a0 = v0 | 0x80;                                             // 0x001c6568: ori $a0, $v0, 0x80
    goto label_0x1c6580;                                        // 0x001c656c: b 0x1c6580
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x001c6570: lw $a0, 0x10($s1)
label_0x1c6574:
    func_001b5060();  // 0x1b5050                                // 0x001c6574: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c6578: ori $a0, $v0, 0x8080
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x001c657c: lw $a0, 0x10($s1)
label_0x1c6580:
    func_001b52d0();  // 0x1b5090                                // 0x001c6580: jal 0x1b5090
    /* nop */                                                   // 0x001c6584: nop 
    v0 = 0x8080 << 16;                                          // 0x001c6588: lui $v0, 0x8080
    func_001b5060();  // 0x1b5050                                // 0x001c658c: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c6590: ori $a0, $v0, 0x8080
    func_001b52d0();  // 0x1b5090                                // 0x001c6594: jal 0x1b5090
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x001c6598: lw $a0, 0x18($s1)
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c659c: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c65a0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c65c0;                          // 0x001c65a4: bne $v1, $v0, 0x1c65c0
    v0 = 0x8080 << 16;                                          // 0x001c65a8: lui $v0, 0x8080
    v0 = 0x8000 << 16;                                          // 0x001c65ac: lui $v0, 0x8000
    func_001b5060();  // 0x1b5050                                // 0x001c65b0: jal 0x1b5050
    a0 = v0 | 0x80;                                             // 0x001c65b4: ori $a0, $v0, 0x80
    goto label_0x1c65cc;                                        // 0x001c65b8: b 0x1c65cc
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x001c65bc: lw $a0, 0x14($s1)
label_0x1c65c0:
    func_001b5060();  // 0x1b5050                                // 0x001c65c0: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c65c4: ori $a0, $v0, 0x8080
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x001c65c8: lw $a0, 0x14($s1)
label_0x1c65cc:
    func_001b52d0();  // 0x1b5090                                // 0x001c65cc: jal 0x1b5090
    /* nop */                                                   // 0x001c65d0: nop 
label_0x1c65d4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c65d8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c65dc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c65e0: jr $ra
    sp = sp + 0x30;                                             // 0x001c65e4: addiu $sp, $sp, 0x30
}