void func_001a34c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a34c0: addiu $sp, $sp, -0x10
    func_001a32e0();  // 1a32e0                                // 0x001a34d4: jal 0x1a32e0
    at = (v0 < t2) ? 1 : 0;                                     // 0x001a34dc: slt $at, $v0, $t2
    if (at == 0) goto label_0x1a34f0;                           // 0x001a34e0: beqz $at, 0x1a34f0
    goto label_0x1a3560;                                        // 0x001a34e8: b 0x1a3560
    v0 = -1;                                                    // 0x001a34ec: addiu $v0, $zero, -1
label_0x1a34f0:
    a1 = 5;                                                     // 0x001a34f0: addiu $a1, $zero, 5
    func_001a3230();  // 1a3230                                // 0x001a34f4: jal 0x1a3230
    if (v0 != 0) goto label_0x1a350c;                           // 0x001a34fc: bnez $v0, 0x1a350c
    a1 = v0 + 0xc;                                              // 0x001a3500: addiu $a1, $v0, 0xc
    goto label_0x1a3560;                                        // 0x001a3504: b 0x1a3560
    v0 = -1;                                                    // 0x001a3508: addiu $v0, $zero, -1
label_0x1a350c:
    goto label_0x1a3528;                                        // 0x001a350c: b 0x1a3528
label_0x1a3514:
    v1 = g_00060004;  // Global at 0x00060004                   // 0x001a3514: lw $v1, 4($a1)
    a0 = a0 + 1;                                                // 0x001a3518: addiu $a0, $a0, 1
    v0 = g_00060008;  // Global at 0x00060008                   // 0x001a351c: lw $v0, 8($a1)
    t0 = t0 + v1;                                               // 0x001a3520: addu $t0, $t0, $v1
    a1 = a1 + v0;                                               // 0x001a3524: addu $a1, $a1, $v0
label_0x1a3528:
    v0 = (a0 < t2) ? 1 : 0;                                     // 0x001a3528: slt $v0, $a0, $t2
    if (v0 != 0) goto label_0x1a3514;                           // 0x001a352c: bnez $v0, 0x1a3514
    /* nop */                                                   // 0x001a3530: nop 
    a1 = 6 << 16;                                               // 0x001a3538: lui $a1, 6
    func_001a3230();  // 1a3230                                // 0x001a3540: jal 0x1a3230
    t0 = t0 + t1;                                               // 0x001a3544: addu $t0, $t0, $t1
    if (v0 != 0) goto label_0x1a3558;                           // 0x001a3548: bnez $v0, 0x1a3558
    v1 = t0 << 2;                                               // 0x001a354c: sll $v1, $t0, 2
    goto label_0x1a3560;                                        // 0x001a3550: b 0x1a3560
    v0 = -1;                                                    // 0x001a3554: addiu $v0, $zero, -1
label_0x1a3558:
    v0 = v1 + v0;                                               // 0x001a3558: addu $v0, $v1, $v0
    v0 = *(int32_t*)((v0) + 0xc);                               // 0x001a355c: lw $v0, 0xc($v0)
label_0x1a3560:
    return;                                                     // 0x001a3564: jr $ra
    sp = sp + 0x10;                                             // 0x001a3568: addiu $sp, $sp, 0x10
}