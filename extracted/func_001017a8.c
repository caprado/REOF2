void func_001017a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x001017a8: addiu $sp, $sp, -0x80
    v1 = 0x1f << 16;                                            // 0x001017ac: lui $v1, 0x1f
    s5 = 0x1f << 16;                                            // 0x001017b4: lui $s5, 0x1f
    v0 = g_001edf38;  // Global at 0x001edf38                   // 0x001017bc: lw $v0, -0x20c8($s5)
    s2 = v1 + -0x2000;                                          // 0x001017d4: addiu $s2, $v1, -0x2000
    v0 = v0 & 1;                                                // 0x001017e4: andi $v0, $v0, 1
    if (v0 != 0) goto label_0x101804;                           // 0x001017e8: bnez $v0, 0x101804
    func_00100d00();  // 100d00                                // 0x001017f0: jal 0x100d00
    /* nop */                                                   // 0x001017f4: nop 
    v1 = 6;                                                     // 0x001017f8: addiu $v1, $zero, 6
    if (v0 == v1) goto label_0x101964;                          // 0x001017fc: beq $v0, $v1, 0x101964
label_0x101804:
    func_00100b90();  // 100b90                                // 0x00101804: jal 0x100b90
    a0 = 4;                                                     // 0x00101808: addiu $a0, $zero, 4
    if (v0 == 0) goto label_0x101944;                           // 0x0010180c: beqz $v0, 0x101944
    t0 = 0x1f << 16;                                            // 0x00101810: lui $t0, 0x1f
    g_001ee000 = s3;  // Global at 0x001ee000                   // 0x00101814: sw $s3, 0($s2)
    g_001ee004 = s1;  // Global at 0x001ee004                   // 0x00101818: sw $s1, 4($s2)
    s3 = 0x1f << 16;                                            // 0x0010181c: lui $s3, 0x1f
    g_001ee008 = s4;  // Global at 0x001ee008                   // 0x00101820: sw $s4, 8($s2)
    a0 = s3 + -0x1000;                                          // 0x00101824: addiu $a0, $s3, -0x1000
    a1 = t0 + -0xf40;                                           // 0x00101828: addiu $a1, $t0, -0xf40
    a2 = 1;                                                     // 0x0010182c: addiu $a2, $zero, 1
    v0 = g_001f0000;  // Global at 0x001f0000                   // 0x00101830: lbu $v0, 0($s0)
    g_001ee00c = v0;  // Global at 0x001ee00c                   // 0x00101834: sb $v0, 0xc($s2)
    v1 = g_001f0001;  // Global at 0x001f0001                   // 0x00101838: lbu $v1, 1($s0)
    g_001ee00d = v1;  // Global at 0x001ee00d                   // 0x0010183c: sb $v1, 0xd($s2)
    v0 = g_001f0002;  // Global at 0x001f0002                   // 0x00101840: lbu $v0, 2($s0)
    g_001ee010 = a0;  // Global at 0x001ee010                   // 0x00101844: sw $a0, 0x10($s2)
    g_001ee00e = v0;  // Global at 0x001ee00e                   // 0x00101848: sb $v0, 0xe($s2)
    g_001ee014 = a1;  // Global at 0x001ee014                   // 0x0010184c: sw $a1, 0x14($s2)
    a3 = g_001f0002;  // Global at 0x001f0002                   // 0x00101850: lbu $a3, 2($s0)
    if (a3 == a2) goto label_0x101878;                          // 0x00101854: beq $a3, $a2, 0x101878
    v0 = (a3 < 2) ? 1 : 0;                                      // 0x00101858: slti $v0, $a3, 2
    if (v0 != 0) goto label_0x101888;                           // 0x0010185c: bnez $v0, 0x101888
    a1 = s1 << 0xb;                                             // 0x00101860: sll $a1, $s1, 0xb
    v0 = 2;                                                     // 0x00101864: addiu $v0, $zero, 2
    if (a3 == v0) goto label_0x101884;                          // 0x00101868: beq $a3, $v0, 0x101884
    v0 = 0x924;                                                 // 0x0010186c: addiu $v0, $zero, 0x924
    goto label_0x101888;                                        // 0x00101870: b 0x101888
    /* nop */                                                   // 0x00101874: nop 
label_0x101878:
    v0 = 0x918;                                                 // 0x00101878: addiu $v0, $zero, 0x918
    goto label_0x101888;                                        // 0x0010187c: b 0x101888
label_0x101884:
label_0x101888:
    v0 = g_001edf38;  // Global at 0x001edf38                   // 0x00101888: lw $v0, -0x20c8($s5)
    s0 = t0 + -0xf40;                                           // 0x0010188c: addiu $s0, $t0, -0xf40
    v0 = v0 & 2;                                                // 0x00101890: andi $v0, $v0, 2
    if (v0 != 0) goto label_0x1018a4;                           // 0x00101894: bnez $v0, 0x1018a4
    g_001ef0c0 = 0;  // Global at 0x001ef0c0                    // 0x00101898: sw $zero, -0xf40($t0)
    func_00116c90();  // 116c90                                // 0x0010189c: jal 0x116c90
label_0x1018a4:
    s3 = s3 + -0x1000;                                          // 0x001018a4: addiu $s3, $s3, -0x1000
    a1 = 0x90;                                                  // 0x001018a8: addiu $a1, $zero, 0x90
    func_00116c90();  // 116c90                                // 0x001018b0: jal 0x116c90
    s4 = 0x1f << 16;                                            // 0x001018b4: lui $s4, 0x1f
    func_00116c90();  // 116c90                                // 0x001018bc: jal 0x116c90
    a1 = 0x18;                                                  // 0x001018c0: addiu $a1, $zero, 0x18
    func_00116c90();  // 116c90                                // 0x001018c8: jal 0x116c90
    a1 = 4;                                                     // 0x001018cc: addiu $a1, $zero, 4
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001018d0: lw $v0, -0x20f0($s4)
    if (v0 <= 0) goto label_0x1018e4;                           // 0x001018d4: blez $v0, 0x1018e4
    a0 = 0x22 << 16;                                            // 0x001018d8: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x001018dc: jal 0x116508
    a0 = &str_0021fed0;  // "cdread end\n"                      // 0x001018e0: addiu $a0, $a0, -0x130
label_0x1018e4:
    v0 = 1;                                                     // 0x001018e4: addiu $v0, $zero, 1
    s0 = 0x1f << 16;                                            // 0x001018e8: lui $s0, 0x1f
    g_001edf58 = v0;  // Global at 0x001edf58                   // 0x001018ec: sw $v0, -0x20a8($s0)
    s1 = 0x1f << 16;                                            // 0x001018f0: lui $s1, 0x1f
    a0 = 0x1f << 16;                                            // 0x001018f4: lui $a0, 0x1f
    t3 = 0x10 << 16;                                            // 0x001018f8: lui $t3, 0x10
    g_001edf34 = v0;  // Global at 0x001edf34                   // 0x001018fc: sw $v0, -0x20cc($s1)
    a0 = a0 + -0xf30;                                           // 0x00101900: addiu $a0, $a0, -0xf30
    local_0 = s3;                                               // 0x00101904: sw $s3, 0($sp)
    t3 = t3 + 0x4f8;                                            // 0x0010190c: addiu $t3, $t3, 0x4f8
    a1 = 1;                                                     // 0x00101910: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x00101914: addiu $a2, $zero, 1
    t0 = 0x18;                                                  // 0x00101918: addiu $t0, $zero, 0x18
    func_001176a8();  // 1176a8                                // 0x00101920: jal 0x1176a8
    if (v0 >= 0) goto label_0x10194c;                           // 0x00101928: bgezl $v0, 0x10194c
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x0010192c: lw $v0, -0x20f0($s4)
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00101930: sw $zero, -0x20a8($s0)
    v0 = 0x1f << 16;                                            // 0x00101934: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x00101938: sw $zero, -0x20cc($s1)
    iSignalSema();  // 0x114300                                 // 0x0010193c: jal 0x114300
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00101940: lw $a0, -0x20d8($v0)
label_0x101944:
    goto label_0x101964;                                        // 0x00101944: b 0x101964
label_0x10194c:
    if (v0 <= 0) goto label_0x101964;                           // 0x0010194c: blez $v0, 0x101964
    v0 = 1;                                                     // 0x00101950: addiu $v0, $zero, 1
    a0 = 0x22 << 16;                                            // 0x00101954: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00101958: jal 0x116508
    a0 = &str_0021fee8;  // "Libcdvd call Clock read 1\n"       // 0x0010195c: addiu $a0, $a0, -0x118
    v0 = 1;                                                     // 0x00101960: addiu $v0, $zero, 1
label_0x101964:
    return;                                                     // 0x00101980: jr $ra
    sp = sp + 0x80;                                             // 0x00101984: addiu $sp, $sp, 0x80
}