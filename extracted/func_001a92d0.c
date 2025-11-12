void func_001a92d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a92d0: addiu $sp, $sp, -0x30
    v0 = 2;                                                     // 0x001a92d4: addiu $v0, $zero, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a92dc: addu.qb $zero, $sp, $s1
    if (a3 == v0) goto label_0x1a935c;                          // 0x001a92e8: beq $a3, $v0, 0x1a935c
    v0 = 1;                                                     // 0x001a92f0: addiu $v0, $zero, 1
    if (a3 == v0) goto label_0x1a9334;                          // 0x001a92f4: beq $a3, $v0, 0x1a9334
    /* nop */                                                   // 0x001a92f8: nop 
    if (a3 == 0) goto label_0x1a930c;                           // 0x001a92fc: beqz $a3, 0x1a930c
    /* nop */                                                   // 0x001a9300: nop 
    goto label_0x1a9380;                                        // 0x001a9304: b 0x1a9380
label_0x1a930c:
    func_001a92d0();  // 0x1a91f0                                // 0x001a930c: jal 0x1a91f0
    /* nop */                                                   // 0x001a9310: nop 
    if (a2 < 0) goto label_0x1a939c;                            // 0x001a9318: bltz $a2, 0x1a939c
    func_00128520();  // 0x1283f8                                // 0x001a9324: jal 0x1283f8
    a1 = 0xa;                                                   // 0x001a9328: addiu $a1, $zero, 0xa
    goto label_0x1a937c;                                        // 0x001a932c: b 0x1a937c
    /* nop */                                                   // 0x001a9330: nop 
label_0x1a9334:
    func_001a9490();  // 0x1a93b0                                // 0x001a9334: jal 0x1a93b0
    /* nop */                                                   // 0x001a9338: nop 
    if (a2 < 0) goto label_0x1a939c;                            // 0x001a9340: bltz $a2, 0x1a939c
    func_00128520();  // 0x1283f8                                // 0x001a934c: jal 0x1283f8
    a1 = 0xd;                                                   // 0x001a9350: addiu $a1, $zero, 0xd
    goto label_0x1a937c;                                        // 0x001a9354: b 0x1a937c
    /* nop */                                                   // 0x001a9358: nop 
label_0x1a935c:
    func_001a94a0();  // 0x1a9490                                // 0x001a935c: jal 0x1a9490
    /* nop */                                                   // 0x001a9360: nop 
    if (a2 < 0) goto label_0x1a939c;                            // 0x001a9368: bltz $a2, 0x1a939c
    func_00128520();  // 0x1283f8                                // 0x001a9374: jal 0x1283f8
    a1 = 0xe;                                                   // 0x001a9378: addiu $a1, $zero, 0xe
label_0x1a937c:
label_0x1a9380:
    func_00128be8();  // 0x1287d8                                // 0x001a9380: jal 0x1287d8
    /* nop */                                                   // 0x001a9384: nop 
    v1 = 3;                                                     // 0x001a9388: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001a938c: nop 
    /* nop */                                                   // 0x001a9390: nop 
    if (v0 != v1) goto label_0x1a937c;                          // 0x001a9394: bne $v0, $v1, 0x1a937c
    /* nop */                                                   // 0x001a9398: nop 
label_0x1a939c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a93a0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a93a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a93a8: jr $ra
    sp = sp + 0x30;                                             // 0x001a93ac: addiu $sp, $sp, 0x30
}