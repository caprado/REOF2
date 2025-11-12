void func_0013aff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x30;                                            // 0x0013aff0: addiu $sp, $sp, -0x30
    if (s0 != 0) goto label_0x13b018;                           // 0x0013b000: bnez $s0, 0x13b018
    a1 = 0x22 << 16;                                            // 0x0013b008: lui $a1, 0x22
    goto label_0x13b1c0;                                        // 0x0013b00c: b 0x13b1c0
    a1 = &str_002256d8;  // "HTCI: sceOpen failed. \\"          // 0x0013b010: addiu $a1, $a1, 0x56d8
    /* nop */                                                   // 0x0013b014: nop 
label_0x13b018:
    func_0013c4f8();  // 0x13c4a8                                // 0x0013b018: jal 0x13c4a8
    v0 = local_4;                                               // 0x0013b020: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x13b1d0;                           // 0x0013b024: bnez $v0, 0x13b1d0
    s1 = local_4;                                               // 0x0013b028: lw $s1, 4($sp)
    v0 = 0x20 << 16;                                            // 0x0013b02c: lui $v0, 0x20
    s1 = v0 + 0x4360;                                           // 0x0013b034: addiu $s1, $v0, 0x4360
    func_0013bc58();  // 0x13bb40                                // 0x0013b038: jal 0x13bb40
    func_00137fb0();  // 0x137ec8                                // 0x0013b040: jal 0x137ec8
    a0 = 0x4400;                                                // 0x0013b044: addiu $a0, $zero, 0x4400
    func_00138240();  // 0x1381d8                                // 0x0013b04c: jal 0x1381d8
    a1 = 1;                                                     // 0x0013b050: addiu $a1, $zero, 1
    a0 = 0x4401;                                                // 0x0013b054: addiu $a0, $zero, 0x4401
    func_00137fb0();  // 0x137ec8                                // 0x0013b058: jal 0x137ec8
    if (s0 >= 0) goto label_0x13b0a0;                           // 0x0013b060: bgez $s0, 0x13b0a0
    v0 = 1 << 16;                                               // 0x0013b064: lui $v0, 1
    v0 = 0x20 << 16;                                            // 0x0013b068: lui $v0, 0x20
    a0 = 2;                                                     // 0x0013b06c: addiu $a0, $zero, 2
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b070: lw $v1, 0x44a4($v0)
    if (v1 == a0) goto label_0x13b090;                          // 0x0013b074: beq $v1, $a0, 0x13b090
    a1 = 0x22 << 16;                                            // 0x0013b078: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x0013b07c: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013b084: jal 0x116508
    a0 = &str_00225708;  // "E0092705:sceOpen fail.(htCiGetFileSize)" // 0x0013b088: addiu $a0, $a0, 0x5708
    a1 = 0x22 << 16;                                            // 0x0013b08c: lui $a1, 0x22
label_0x13b090:
    goto label_0x13b1c0;                                        // 0x0013b094: b 0x13b1c0
    a1 = &str_00225728;  // "HTCI: sceOpen failed. IOP Module version is invalid.\n" // 0x0013b098: addiu $a1, $a1, 0x5728
    /* nop */                                                   // 0x0013b09c: nop 
label_0x13b0a0:
    v0 = v0 | 4;                                                // 0x0013b0a0: ori $v0, $v0, 4
    if (s0 != v0) goto label_0x13b0e0;                          // 0x0013b0a4: bne $s0, $v0, 0x13b0e0
    v0 = 0x13;                                                  // 0x0013b0a8: addiu $v0, $zero, 0x13
    v0 = 0x20 << 16;                                            // 0x0013b0ac: lui $v0, 0x20
    a0 = 2;                                                     // 0x0013b0b0: addiu $a0, $zero, 2
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b0b4: lw $v1, 0x44a4($v0)
    if (v1 == a0) goto label_0x13b0d0;                          // 0x0013b0b8: beq $v1, $a0, 0x13b0d0
    a1 = 0x22 << 16;                                            // 0x0013b0bc: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x0013b0c0: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013b0c4: jal 0x116508
    a0 = &str_00225750;  // "E0082101:sceOpen fail.(htCiGetFileSize)" // 0x0013b0c8: addiu $a0, $a0, 0x5750
    a1 = 0x22 << 16;                                            // 0x0013b0cc: lui $a1, 0x22
label_0x13b0d0:
    goto label_0x13b1c0;                                        // 0x0013b0d4: b 0x13b1c0
    a1 = &str_00225788;  // "HTCI: sceOpen failed. file desc is insufficient.\n" // 0x0013b0d8: addiu $a1, $a1, 0x5788
    /* nop */                                                   // 0x0013b0dc: nop 
label_0x13b0e0:
    if (s0 != v0) goto label_0x13b118;                          // 0x0013b0e0: bne $s0, $v0, 0x13b118
    v0 = 0x20 << 16;                                            // 0x0013b0e4: lui $v0, 0x20
    a0 = 2;                                                     // 0x0013b0e8: addiu $a0, $zero, 2
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b0ec: lw $v1, 0x44a4($v0)
    if (v1 == a0) goto label_0x13b108;                          // 0x0013b0f0: beq $v1, $a0, 0x13b108
    a1 = 0x22 << 16;                                            // 0x0013b0f4: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x0013b0f8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013b0fc: jal 0x116508
    a0 = &str_002257b0;  // "E0092706:sceLseek fail.(htCiGetFileSize)" // 0x0013b100: addiu $a0, $a0, 0x57b0
    a1 = 0x22 << 16;                                            // 0x0013b104: lui $a1, 0x22
label_0x13b108:
    goto label_0x13b1c0;                                        // 0x0013b10c: b 0x13b1c0
    a1 = &str_00225788;  // "HTCI: sceOpen failed. file desc is insufficient.\n" // 0x0013b110: addiu $a1, $a1, 0x5788
    /* nop */                                                   // 0x0013b114: nop 
label_0x13b118:
    func_00137fb0();  // 0x137ec8                                // 0x0013b118: jal 0x137ec8
    a0 = 0x4600;                                                // 0x0013b11c: addiu $a0, $zero, 0x4600
    func_00138160();  // 0x1380a8                                // 0x0013b128: jal 0x1380a8
    func_00137fb0();  // 0x137ec8                                // 0x0013b130: jal 0x137ec8
    a0 = 0x4601;                                                // 0x0013b134: addiu $a0, $zero, 0x4601
    func_00137fb0();  // 0x137ec8                                // 0x0013b138: jal 0x137ec8
    a0 = 0x4600;                                                // 0x0013b13c: addiu $a0, $zero, 0x4600
    func_00138160();  // 0x1380a8                                // 0x0013b148: jal 0x1380a8
    a2 = 2;                                                     // 0x0013b14c: addiu $a2, $zero, 2
    a0 = 0x4601;                                                // 0x0013b150: addiu $a0, $zero, 0x4601
    func_00137fb0();  // 0x137ec8                                // 0x0013b154: jal 0x137ec8
    if (s1 >= 0) goto label_0x13b190;                           // 0x0013b15c: bgez $s1, 0x13b190
    a1 = 0x22 << 16;                                            // 0x0013b160: lui $a1, 0x22
    func_0013acb8();  // 0x13ac88                                // 0x0013b168: jal 0x13ac88
    a1 = &str_002257e8;  // "E0092707:sceClose fail.(htCiGetFileSize)" // 0x0013b16c: addiu $a1, $a1, 0x57e8
    func_00137fb0();  // 0x137ec8                                // 0x0013b170: jal 0x137ec8
    a0 = 0x4500;                                                // 0x0013b174: addiu $a0, $zero, 0x4500
    func_00138298();  // 0x138240                                // 0x0013b178: jal 0x138240
    func_00137fb0();  // 0x137ec8                                // 0x0013b180: jal 0x137ec8
    a0 = 0x4501;                                                // 0x0013b184: addiu $a0, $zero, 0x4501
    goto label_0x13b1d4;                                        // 0x0013b188: b 0x13b1d4
label_0x13b190:
    func_00137fb0();  // 0x137ec8                                // 0x0013b190: jal 0x137ec8
    a0 = 0x5000;                                                // 0x0013b194: addiu $a0, $zero, 0x5000
    func_00138298();  // 0x138240                                // 0x0013b198: jal 0x138240
    a0 = 0x5001;                                                // 0x0013b1a0: addiu $a0, $zero, 0x5001
    func_00137fb0();  // 0x137ec8                                // 0x0013b1a4: jal 0x137ec8
    if (s0 >= 0) goto label_0x13b1d4;                           // 0x0013b1ac: bgezl $s0, 0x13b1d4
    a1 = 0x22 << 16;                                            // 0x0013b1b4: lui $a1, 0x22
    a1 = &str_00225818;  // "E0092708:fname is null.(htCiOpen)" // 0x0013b1bc: addiu $a1, $a1, 0x5818
label_0x13b1c0:
    func_0013acb8();  // 0x13ac88                                // 0x0013b1c0: jal 0x13ac88
    /* nop */                                                   // 0x0013b1c4: nop 
    goto label_0x13b1d4;                                        // 0x0013b1c8: b 0x13b1d4
label_0x13b1d0:
label_0x13b1d4:
    return;                                                     // 0x0013b1e0: jr $ra
    sp = sp + 0x30;                                             // 0x0013b1e4: addiu $sp, $sp, 0x30
}